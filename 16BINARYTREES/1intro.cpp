#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
    // constructor
    Node(int val){
        this->data =val;
        this->left = NULL;
        this->right = NULL;
    }
};

// it returns root node of the created tree
Node* createTree(){
    cout<<"enter the value for Node: "<<endl;
    int data;
    cin>>data;
    if(data == -1){
        return NULL;
    }

    // step1: create Node
    Node* root = new Node(data);
    // step2: Create left subtree
    // cout<<"left of Node: "<<root->data<<endl;
    root->left = createTree();
    // step3: Create right subtree
    // cout<<"right of node: "<<root->data<<endl;
    root->right = createTree();
    return root;
}


// 3 traversals 

// PreOrder Traversal
void preOrderTraversal(Node* root){
    // base case
    if(root == NULL){
        return ;
    }
    // left se dekhte h 
    // NLR
    // N 
    cout<<root->data<<" ";
    // L
    preOrderTraversal(root->left);
    // R
    preOrderTraversal(root->right);
}
void inOrderTraversal(Node* root){
    // base case
    if(root == NULL){
        return;
    }
    // niche se dekhte h
    // LNR
    inOrderTraversal(root->left);
    // N
    cout<<root->data<<" ";
    // R
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node *root) {
    // base case
    if(root==NULL){
        return;
    }
    // LRN
    // L
    postOrderTraversal(root->left);
    // R
    postOrderTraversal(root->right);
    // N
    cout<<root->data<<" ";

}

int main(){

    Node* root = createTree();
    // cout<<root->data<<endl;
    cout<<"Printing Preorder: ";
    preOrderTraversal(root);
    cout<<endl;

    cout<<"Printing Postorder: ";
    postOrderTraversal(root);
    cout<<endl;

    
    cout<<"Printing inorder: ";
    inOrderTraversal(root);
    cout<<endl;



return 0;
}

