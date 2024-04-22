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

bool searchInBST(Node* root,int target){
    if(root == NULL){
        return false;
    }
    // 1 case mujhe solve krna h
    if(root->data == target){
        return true;
    }

    bool leftAns = false;
    bool rightAns = false;

    if(target > root->data){
        rightAns = searchInBST(root->right,target);
    }
    if(target < root->data){
        leftAns = searchInBST(root->left,target);
    }
    return leftAns || rightAns;
}

int main(){
    Node* root = NULL;
    createBST(root); 
    int target;
    cout<<"Enter target: "<<endl;
    cin>>target;
    while(target != -1){
        if(searchInBST(root,target)){
        cout<<"Present"<<endl;
        }
        else{
            cout<<"Absent"<<endl;
        }

        cout<<"Enter target: "<<endl;
        cin>>target;
    }

    

return 0;
}