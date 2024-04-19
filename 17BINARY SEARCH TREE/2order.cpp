#include<iostream>
using namespace std;

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


void preorder(Node* root){
    // NLR
    if(root == NULL){
        return ;
    }
    // N
    cout<<root->data<<" ";
    // L
    preorder(root->left);
    // R
    preorder(root->right);
}

// INORDER OF BST IS ALWAYS SORTED
void inorder(Node* root){
    // LNR
    if(root == NULL){
        return;
    }
    // L
    inorder(root->left);
    // N
    cout<<root->data<<" ";
    // R
    inorder(root->right);
}

void postorder(Node* root){
    // LRN
    if(root == NULL){
        return;
    }
    // L
    postorder(root->left);
    // R
    postorder(root->right);
    // N
    cout<<root->data<<" ";
    
}

Node* minValue(Node* root){
    if(root == NULL){
        cout<<"No Min Value exists"<<endl;
        return NULL;
    }
    Node* temp = root;

    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

// Time complexity is O(n) worst case  O(height) and O(logn) best case

Node* maxValue(Node* root){
    if(root == NULL){
        cout<<"No Max Value exists"<<endl;
        return NULL;
    }
    Node* temp = root;

    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}

int main(){
    Node* root = NULL;
    createBST(root);

    // levelOrderTraversal(root);
    cout<<"Inorder: "<<endl;
    inorder(root);
    cout<<endl;
    cout<<"Preorder: " <<endl;
    preorder(root);
    cout<<endl;
    cout<<"Postorder: " <<endl;
    postorder(root);
    cout<<endl;

    Node* minNode= minValue(root);
    if(minNode == NULL){
        cout<<"there is no node in tree,so no min value"<<endl;
    }
    else{
        cout<<"Min Value: "<<minNode->data<<endl;
    }
    cout<<endl;
    Node* maxNode= maxValue(root);
    if(maxNode == NULL){
        cout<<"there is no node in tree,so no max value"<<endl;
    }
    else{
        cout<<"Max Value: "<<maxNode->data<<endl;
    }


return 0;
}