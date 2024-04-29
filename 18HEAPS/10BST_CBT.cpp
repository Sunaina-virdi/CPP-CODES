// CBT + BST -> check whether it is a heap
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

TreeNode* insertIntoBST(TreeNode* root,int data){
    if(root == NULL){
        root = new TreeNode(data);
        return root;
    } 

    // its not the first node
    if(data > root->val){
        root->right = insertIntoBST(root->right,data);
    }
    else{
        root->left = insertIntoBST(root->left,data);
    }
    return root;
}

void createBST(TreeNode* &root){
    // cout<<"Enter data: "<<endl;
    int data;
    cin>>data;

    while(data != -1){
        // cout<<"Enter data: "<<endl;
        root = insertIntoBST(root, data);
        cin>> data;
    }
}




void levelOrderTraversal(TreeNode* root){
    queue<TreeNode*>q;
    q.push(root);  
    q.push(NULL);

    while(!q.empty()){
        TreeNode* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->val<<" ";
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
    }

}

void storeInorderTraversal(TreeNode* root,vector<int>& in){
    if(root == NULL){
        return;
    }
    // LNR
    storeInorderTraversal(root->left,in);
    in.push_back(root->val);
    storeInorderTraversal(root->right,in);
}

// index ko by reference jruri h track rkne k ly
void replaceUsingPostOrder(TreeNode* root,vector<int>in, int &index){
    if(root == NULL){
        return;
    }
    // LRN
    replaceUsingPostOrder(root->left,in,index);
    replaceUsingPostOrder(root->right,in,index);
    root->val = in[index];
    index++;
}

TreeNode* convertBSTIntoMaxHeap(TreeNode* root){
    // 1st step -> store inorder
    vector<int> inorder;
    storeInorderTraversal(root,inorder);
    // replace the node values with thw sorted inorder values,using the postorder traversal
    int index = 0;
    replaceUsingPostOrder(root,inorder,index);
    return root;
}

int main(){
    TreeNode* root = NULL;
    createBST(root);
    cout<<"Printing the BST: "<<endl;
    levelOrderTraversal(root);

    cout<<"Converting ibnto heaps: "<<endl;
    root = convertBSTIntoMaxHeap(root);
    levelOrderTraversal(root);

return 0;
}