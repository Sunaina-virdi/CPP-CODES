// collection of nodes
// non contiguous memory allocation
//  no wastage in linked list in comparison of array
// run time pe dynamically linked list k size ko grow ya shrink kr skte h 
#include<iostream>
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
        cout<<"I am inside parameterized constructor"<<endl;
        this->data= data;
        this->next= NULL;
    }
};

void printLL(Node* head){
    // Traverse krne k ly ek new ptr bnane pdhega 
    Node* temp =head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

// insertion 
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
   
// how to create a tail
void createTail(Node* head,Node* &tail){
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp -> next;
    }
    // jab yh loop khtm hogya hoga then aapka temp wala pointer kahada hoga last node pr
    // tab tail = temp krke, tail ko last node or le aao
    tail = temp;
}


int main(){
    // creation of Node
    Node a; //static object
    // Node* head = new Node();  //dynamic object 

    // 5 dynamic objects created & calling the parameterized constructor
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);


    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    // linked list create ho chuki h

    Node* head = first;
    cout<<"Printing the entire LL: "<<endl;
    printLL(head);  
    Node* tail=fifth;
    insertAtHead(head,tail,500); 
    printLL(head);
    insertAtTail(head,tail,523);
    printLL(head);

    // cout<<"Length of LL is: "<<getLength(head);

return 0;
}