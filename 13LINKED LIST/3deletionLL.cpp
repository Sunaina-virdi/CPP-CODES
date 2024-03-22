/* 
Linked List
-> creation
-> insert
 -> deletion (delete node())
         ->delete from head
         ->delete from tail
         ->delete from middle
*/

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
    ~Node(){
        cout<<"I am destructor: "<<this->data<<endl;
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
    // if(position < 1){
    //     cout<<"Cannot insert,please enter a valid position"<<endl;
    //     return;
    // }
    int length = getLength(head);
    // if (position > length) {
    //     cout<<"Cannot insert,please enter a valid position"<<endl;
    //     return ;
    // }
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
        Node* curr= NULL;
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

// deletion of node
void deleteNode(Node* &head,Node* &tail,int position){
    // empty list
    if(head==NULL){
        cout<<"cannot delete,cox LL is empty"<<endl;
        return;
    }
    if(head == tail){
        // single element
        Node* temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
        return; 
    }

    int length = getLength(head);
    // delete from head
    if(position == 1){
        // first node ko delete kardo
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp; //jb bhi tum dynamically allocated memory ko free krvate ho delete keyword ka use krke ..toh destructor call hota h
    }
    else if(position == length){
        // last node ko delete kardo
        // Step1: find prev
        Node* prev = head;
        while(prev ->next != tail){
            prev = prev -> next;
        }
        // Step 2: prev node ka link ko null karo
        prev->next=NULL;
        // Step 3: node ko delete kro
        delete tail; 
        // Step 4: update tail
        tail=prev;
    } 
    else{
        // middle m koi node delete krna h
        // Step1: set prev/curr pointers
        Node* prev = NULL;
        Node* curr = head;
    while(position != 1){
        position--; 
        prev = curr;
        curr = curr->next;
    }

    // step2: prev-> next m curr ka next node add kro
    prev->next = curr->next;

    // step3: node isolate krdo
    curr->next=NULL;

    // step4:delete node
    delete curr;
    }
}

int main(){

    Node* head =NULL;
    Node* tail =NULL;
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,50);
    insertAtHead(head,tail,60);
    insertAtHead(head,tail,80);
    printLL(head);

cout << "Before-> Length of LL is: "<<getLength(head)<<endl;
cout<<"Before -> head-> "<<head->data<<endl;
cout<<"Before -> tail-> "<<tail->data<<endl;
    deleteNode(head,tail,1);
    printLL(head);
    cout<<endl;
cout << "After-> Length of LL is: "<<getLength(head)<<endl;
cout<<"After -> tail-> "<<tail->data<<endl;



return 0;
}
