#include<iostream>
using namespace std;
struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->data =val;
        this->left = NULL;
        this->right = NULL;
    }
};

int sum(TreeNode* root){
    if(!root ){
        return 0;
    }
    if(!root->left && !root->right){
        int temp = root->data;
        root->data = 0;
        return temp;
    }
    int lsum = sum(root->left);
    int rsum = sum(root->right);
    int temp = root->data;
    root->data = lsum + rsum;
    return root->data + temp;

}


void SumTree(TreeNode* node){
    sum(node);
}
int main(){

return 0;
}