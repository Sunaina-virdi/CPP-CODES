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
        // cout<<"I am inside parameterized constructor"<<endl;
        this->data= data;
        this->next= NULL;
    }
    ~Node(){
        cout<<"I am destructor: "<<this->data<<endl;
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

// check for loop

bool checkLoop(Node* &head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next; //fast ko 2 step aage bada diya
            slow = slow->next; //slow ko 1 step aage bada diya
        }
        // check for loop
        if(fast == slow){
            return true; //loop present h 
        }
    }
    return false; //loop present nhi h
}

// starting point of loop

Node* getStartingPointOfLoop(Node* &head){
    // check for loop
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(fast == slow){
            break;
        }
    }
    // yha pohocha, iska matlab slow and fast meet kr chuke h
    // slow ko head pe lga do 
    slow = head;
    // slow and fast-> 1 step jaha meet krgye vahi tumhara starting point of loop h
    while(fast!=slow){
        slow = slow->next;
        fast = fast->next;
    }
    // return starting point
    return slow;
     
}

// remove loop

void removeLoop(Node* &head){
    Node* startpoint = getStartingPointOfLoop(head);
    // check for loop
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(fast == slow){
            break;
        }
    }
    // yha pohocha, iska matlab slow and fast meet kr chuke h
    slow = head;
    // slow and fast-> 1 step
    while(fast!=slow){
        slow = slow->next;
        fast = fast->next;
    }
    // starting point
    Node* startPoint = slow;

    Node* temp = fast;
    while(temp->next != startPoint){
        temp = temp->next;

    } 
    temp->next = NULL;
     
}


int main(){
    Node* head=NULL;
    Node* tail =NULL;
    insertAtHead(head,tail,77);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,50);
    insertAtHead(head,tail,60);
    insertAtHead(head,tail,90);
    tail->next = head->next;
    // tail->next=head->next->next;

    // printLL(head);
    cout<<endl;
    cout<<getStartingPointOfLoop(head)->data<<endl;
    removeLoop(head);
    printLL(head);


    
return 0;
}