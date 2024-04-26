#include<iostream>
#include<queue>
using namespace std;
/*
Convert BST INTO sorted DOUBLY LINKED LIST
INPUT:
     100
    /   \ 
   50   200
  / \     \
 5  60    300

OUTPUT:
    tree: left,right
    tree into LL: left => prev, right => next
    BST -> Doubly LL

    5 <-> 50 <-> 60 <-> 100 <-> 200 <-> 300

*/

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertIntoBST(Node* root,int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    } 

    // its not the first node
    if(data > root->data){
        root->right = insertIntoBST(root->right,data);
    }
    else{
        root->left = insertIntoBST(root->left,data);
    }
    return root;
}

void createBST(Node* &root){
    cout<<"Enter data: "<<endl;
    int data;
    cin>>data;

    while(data != -1){
        cout<<"Enter data: "<<endl;
        root = insertIntoBST(root, data);
        cin>> data;
    }
}

void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);  
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
    }

}

Node* bstFromInorder(int inorder[],int s,int e){
    //base case
    if(s > e){
        return NULL;
    }

    // 1 case solve krna h
    int mid = (s+e)/2;
    int element = inorder[mid];
    Node* root = new Node(element);

    //recursive call
    root->left = bstFromInorder(inorder,s,mid-1);
    root->right = bstFromInorder(inorder,mid+1,e);

    return root;

}



// convert this BST into a sorted Doubly Linked List
void convertBSTtoDLL(Node* root,Node* & head){
     if(root == NULL){
        return;
     }
    //  RNL
    // R
    convertBSTtoDLL(root->right,head);
    // N
    // attaching next pointer of current node to head of ll
    root->right = head;
    if(head != NULL)
        head->left = root;
    head = root; //update head
    // L 
    convertBSTtoDLL(root->left,head);
}

void printLinkedList(Node* head){
    Node* temp = head;
    cout<<"Printing the enetire list: "<<endl;
    while(temp != NULL){
        cout<<temp->data<<"->";
         temp = temp->right;
    }
    cout<<endl;
}

int main(){
    int inorder[]={10,20,30,40,50,60,70};
    int size = 7;
    int start = 0;
    int end = size-1;
    Node* root = bstFromInorder(inorder,start,end);

    levelOrderTraversal(root);
    Node* head = NULL;
    convertBSTtoDLL(root,head);
    printLinkedList(head);



return 0;
}
