#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL; 
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

int findLength(Node* head){
    Node* temp = head;
    int len = 0;

    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void insertAtHead(Node* &head,Node* &tail,int data){
    // LL is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        // LL is not empty
        // step1: create a node 
        Node* newNode = new Node(data); 
        // step2: connect new node to head
        head->prev = newNode;
        // step3: connect head to newnode
        newNode->next=head;
        // step4:update head
        head = newNode ;
    }

}

void insertAtTail(Node* &head,Node* &tail,int data){
    // LL is empty
    if(head == NULL){
        Node * newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        // LL is not empty
        Node* newNode = new Node(data);
        tail->next=newNode;
        newNode->prev = tail;
        tail = newNode;

    }
}

void insertAtMiddle(Node* &head,Node* &tail,int data,int position){
    if(head==NULL) {
        cout<<"The Linked List is Empty"<<endl;
        Node* newNode = new Node(data);
        head = newNode;
        tail=newNode;
    }
    else{
        int len = findLength(head);
        if(position == 1){
            insertAtHead(head,tail,data);
        }
        else if(position == len){
            insertAtTail(head,tail,data);
        }
        else{
            // step1: create a new node
            Node* newNode = new Node(data);
            // step2: set prev and curr pointer
            Node* prevnode = NULL;
            Node* currnode = head;
            while(position != 1){
                position--;
                prevnode = currnode;
                currnode = currnode->next;
            }
            // step3: pointers update
            prevnode->next = newNode;
            newNode->prev = prevnode;
            newNode->next = currnode;
            currnode->prev = newNode;

        }
    }
}

// deletion node
void deleteNode(Node* &head,Node* &tail,int position){
    int len = findLength(head);
    if(head == NULL){
        // LL is empty
        cout<<"Cannot delete, coz LL is empty"<<endl;
        return;
    }
    if(head == tail){
        Node* temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
        return;
    }
    if(position == 1){
        // delete from head
        Node* temp = head;
        head = head->next;
        temp->next=NULL;
        head->prev=NULL;
        delete temp;
    }
    else if(position == len){
        // delete from tail
        Node* prevNode = tail->prev;
        prevNode->next = NULL;
        tail->prev = NULL;
        delete tail;
        tail = prevNode;
    }
    else{
        // delete from middle
        // step1:set prevnode/currnode/nextnode
        Node* prevNode = NULL;
        Node* currNode = head;
        while(position!=1){
            position--;
            prevNode = currNode;
            currNode = currNode->next;
        }
        Node* nextNode = currNode->next;

        prevNode->next = nextNode;
        currNode->prev = NULL;
        currNode->next = NULL;
        nextNode->prev = prevNode; 

        delete  currNode;
    }
}
 


int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,10);
    print(head);
    cout<<endl;
    // insertAtTail(head,tail,1000);
    // insertAtMiddle(head,tail,1000,2);
    deleteNode(head,tail,1);
    print(head);
    cout<<"length of LL is: "<<findLength(head)<<endl;
return 0;
}