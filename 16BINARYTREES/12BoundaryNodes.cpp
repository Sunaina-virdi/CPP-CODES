#include<iostream>
#include<queue>
#include<map>
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

Node* createTree(){
    cout<<"Element the value for Node: ";
    int value;
    cin>>value;

    if(value == -1){
        return NULL;
    }

    // create Node;
    Node* root = new Node(value);
    // cout<<"Enter the left of: "<<value<<endl;
    root->left = createTree();
    // cout<<"Enter the right of: "<<value<<endl;
    root->right = createTree();
    return root;
}

void levelOrderTraversal(Node* root){
    queue<Node* >q;
    q.push(root);
    q.push(NULL);  // To indicate the end of a level
    cout<<endl;
    while((q.size() > 1)){
        Node* front = q.front();
        q.pop();

        if(front == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<front->data<<" ";
            if(front->left != NULL){
                q.push(front->left);
            }
            if(front->right != NULL){
                q.push(front->right);
            }
        }
    }
}


void printLeftBoundary(Node* root){
    if(root==NULL)  return ;
    if(root->left == NULL && root->right == NULL) return;

    cout<<root->data<<" ";
    if(root->left != NULL){
        printLeftBoundary(root->left);
    }
    else{
        printLeftBoundary(root->right);
    }
}

void printLeafBoundary(Node* root){
    if(root == NULL) return;

    if(root->left == NULL && root->right == NULL){
        cout<<root->data<<" ";
    }

    printLeafBoundary(root->left);
    printLeafBoundary(root->right);
}

void printRightBoundary(Node* root){
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL) return;

    if(root->right != NULL){
        printRightBoundary(root->right);
    }
    else{
        printRightBoundary(root->left);
    }    
    cout << root->data << " ";
}

void BoundaryTraversal(Node* root){
    if(root == NULL) return;
    printLeftBoundary(root);
    printLeafBoundary(root);
    if(root->right != NULL){
        printRightBoundary(root->right);
    }
    else{
        printRightBoundary(root->left);
    }
    
}

int main(){
    Node* root = createTree();
    levelOrderTraversal(root);
//  10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1

cout<<endl;
    cout<<"Following is the boundary traversal of given binary tree: \n";
    BoundaryTraversal(root);
return 0;
}
