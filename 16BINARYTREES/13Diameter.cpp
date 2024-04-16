#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val =val;
        this->left = NULL;
        this->right = NULL;
    }
};

class Solution{
    public:
    int D = 0;
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int lh = height(root->left);
        int rh = height(root->right);

        int currDia = lh+rh;
        D = max(currDia,D);
        return max(lh,rh)+1;
    }

    int diameterOfBinaryTree(TreeNode* root){
        height(root);
        return D;
    }
};



int main(){

    TreeNode* root =  new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution sol;
    cout<<"Diameter of the binary tree: "<<sol.diameterOfBinaryTree(root)<<endl;

    delete root->left->right;
    delete root->left->left;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}