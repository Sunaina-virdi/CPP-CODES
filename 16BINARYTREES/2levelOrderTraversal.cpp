#include<iostream>
#include<queue>
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
    root->left = createTree();
    // step3: Create right subtree
    root->right = createTree();
    return root;
}

// level order traversal
void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL); //to indicate end of a level

    // asli tyraversal start krte h
    while(q.size() > 1){
        Node* front = q.front();
        q.pop();

        if(front ==NULL){ //agr null mil gay eska mtlb apka level complete ho chuka h apn enew line m jana h 
            cout<<endl; //new line print krvao
            if(!q.empty()){ // agr queue empty nhi h toh NULL insert kro
                q.push(NULL);
            } 
        }
        else{
            cout<<front->data<<" ";

            // push left child to Queue
            if(front->left !=NULL)
                q.push(front->left);

            // push Right Child to Queue
            if(front->right!=NULL)
                q.push(front->right);
        }  
    }
}

int main(){

    Node* root = createTree();
    // cout<<root->data<<endl;
    cout<<"Level Order: ";
    levelOrderTraversal(root);
    cout<<endl;


return 0;
}
