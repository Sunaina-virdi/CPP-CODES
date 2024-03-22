#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    // jab bhi object create krte h toh apke object ko initial krne k lg automatictically constructor ko call jati h  
    // default constructor 
    Node(){
        cout<<"I am inside default constructor"<<endl;
        this->next = NULL;
    }
    // parameterized constructor
    Node(int data){
        // cout<<"I am inside parameterized constructor"<<endl;
        this->data= data;
        this->next= NULL;
    }
};
int getLength(Node* head) {
    int length = 0;
    Node* temp = head;
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }
    return length;
}
void printLL(Node* head){
    // Traverse krne k ly ek new ptr bnane pdhega 
    Node* temp =head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}
void insertAtHead(Node* &head,Node* &tail,int data){  //pass by references
    if(head == NULL){
        // empty LL mtlb head Null h or tail bhi NULL h
        // Step1: create new node
        Node* newNode = new Node(data);   
        // step2: update head
        head = newNode;
        tail = newNode;   // both are pointing to the same node
    }
    else{
        // non-empty LL wala case
        // create a new node
        Node* new_node = new Node(data);
        // attach new node to head node
        new_node->next = head;
        // update the head pointer
        head = new_node;
    }

}
void  insertAtTail(Node* &head,Node* &tail,int data){
      if(head == NULL){
        // empty LL
        // step1:create toh kro node
        Node* newNode = new Node(data);
        // step2: single node h entire list m ,that's why head and tail ko ispar point karwado
        head = newNode;
        tail = newNode;   // both are pointing at same node

      }
      else{
        //  non-empty LL wala case
        // create a new node
        Node* newNode = new Node(data);
        // attach newNode to the head node
        tail->next  = newNode;
        // update head
        tail = newNode;
      }
}
// insert at position
void insertAtPosition(Node *&head,Node* &tail, int data, int position) {
    int length = getLength(head);
    if(position == 1){
        insertAtHead(head,tail,data);
    }
    else if(position == length + 1){
        insertAtTail(head,tail,data);
    }
    else{
        // insert at middle of linked list 
        // step1: Create a new node
        Node* newNode = new Node(data);
        // step2: traverse prev // curr to position
        Node* prev = NULL;
        Node* curr= head;
        while(position != 1){
            prev = curr;
            curr = curr->next;
            position--;
        }
        // step3: attach prev to new node
        prev->next=newNode;

        // step4:attach newNode to curr
        newNode ->next = curr; 
    }
}

// how to create a tail
void createTail(Node* head,Node* &tail){
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    // jab yh loop khtm hogya hoga then aapka temp wala pointer kahada hoga last node pr
    // tab tail = temp krke, tail ko last node or le aao
    tail = temp;
}

int main(){

    Node* head =NULL;
    Node* tail =NULL;
    insertAtTail(head,tail,10);
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,50);
    printLL(head);

    insertAtPosition(head,tail,5,2);
    printLL(head);

    // insertAtPosition(head,tail,1000,5);
    // printLL(head);
return 0;
}
