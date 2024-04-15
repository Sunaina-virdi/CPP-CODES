#include<iostream>
#include<queue>
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
void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    // NLR
    cout<<root->data<<" ";
    // L
    preOrder(root->left);
    // R
    preOrder(root->right);
}

void InOrder(Node* root){
    if(root == NULL){
        return;
    }
    // LNR
    
    // L
    InOrder(root->left);
    // N
    cout<<root->data<<" ";
    // R
    InOrder(root->right);
}

void PostOrder(Node* root){
    if(root == NULL){
        return;
    }
    // LRN
    
    // L
    PostOrder(root->left);
    // R
    PostOrder(root->right);
    // N
    cout<<root->data<<" ";
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

void printleftView(Node* root,int level,vector<int>& leftView){
    if(root == NULL){
        return;
    }
    if(level == leftView.size()){
        // iska mtlb left view ki node milgye h,store krlo
        leftView.push_back(root->data);
    }
    printleftView(root->left,level+1,leftView);
    printleftView(root->right,level+1,leftView);
    
}

void printrightView(Node* root,int level,vector<int>& rightView){
    if(root == NULL){
        return;
    }
    if(level == rightView.size()){
        // iska mtlb left view ki node milgye h,store krlo
        rightView.push_back(root->data);
    }
    printrightView(root->right,level+1,rightView);
    printrightView(root->left,level+1,rightView);
}

int main(){
    Node* root = createTree();
    levelOrderTraversal(root);
//  10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1

    vector<int> leftview;
    printleftView(root,0,leftview);
    cout<<endl;
    cout<<"Printing left view: "<<endl;
    for(int i=0;i<leftview.size();i++){
        cout<<leftview[i]<<" ";
    }

vector<int> rightview;
    printrightView(root,0,rightview);
    cout<<endl;

    cout<<"Printing right view: "<<endl;
    for(int i=0;i<rightview.size();i++){
        cout<<rightview[i]<<" ";
    }

return 0;
}



