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
    bool isBalanced = true;
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int lh = height(root->left);
        int rh = height(root->right);

        if(isBalanced && abs(lh-rh)>1){
            isBalanced = false;
        }
        return max(lh,rh)+1; 
    }

    bool isBalanced (TreeNode*root){
        height(root);
        return isBalanced;
    }

};


