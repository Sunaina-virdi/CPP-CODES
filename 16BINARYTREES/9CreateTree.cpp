// Create tree using inorder and postorder traversal
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
    // cout<<"left of Node: "<<root->data<<endl;
    root->left = createTree();
    // step3: Create right subtree
    // cout<<"right of node: "<<root->data<<endl;
    root->right = createTree();
    return root;
}

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
            cout<<endl;
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


int searchInorder(int inOrder[],int size,int target){
    for(int i=0;i<size;i++){
        if(inOrder[i] == target){
            return i;
        }
    }
    return -1;
}

// by reference is important

Node* constructTreeFromPreAndInorderTraversal(int preOrder[],int inorder[],int &preIndex,int inOrderStart,int inOrderEnd,int size){
    // base case
    if(preIndex > size || inOrderStart > inOrderEnd){
        return NULL;
    }

    // 1 case m solve krta hu
    int element = preOrder[preIndex];
    preIndex++;

    Node* root = new Node(element);
    // element search krna padega inorder m
    int position = searchInorder(inorder,size,element);


    // baki rec sambhal lega
    root->left = constructTreeFromPreAndInorderTraversal(preOrder,inorder,preIndex,inOrderStart,position-1,size);

    root->right = constructTreeFromPreAndInorderTraversal(preOrder,inorder,preIndex,position+1,inOrderEnd,size);

    return root;
}

int main(){
    int inorder[] = {10,8,6,2,4,12};
    int preorder[] = {2,8,10,6,4,12};
    int size = 6;
    int preOrderindex = 0;
    int inorderStart = 0;
    int inOrderEnd = 5;

    Node* root = constructTreeFromPreAndInorderTraversal(preorder,inorder,preOrderindex,inorderStart,inOrderEnd,size);
    cout<<"Printing the entire tree: "<<endl;
    levelOrderTraversal(root);
return 0;
}