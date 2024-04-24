//LEET CODE
// QUES NO 235

#include<iostream>
#include<bits/stdc++.h>
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

class Solution{
    public:
    TreeNode* lowestCommonAncestor(TreeNode* root,TreeNode* p,TreeNode* q){
        // base case
        if(root == NULL){
            return NULL;
        }

        // case 1: p and q both comes in left subtree of root node
        if(p->val < root->val && q->val < root->val){
            TreeNode* leftAns = lowestCommonAncestor(root->left,p,q);
        }

        // case 2: p and q both comes in right Subtree of root node
        if(p->val > root->val && q->val > root->val){
            TreeNode* rightAns = lowestCommonAncestor(root->right,p,q);
        }
        
        // case 3: p is in left subtree of root node && q is in right Subtree of root node
        if(p->val < root->val && q->val > root->val){
            return root;
        }

        // case 4: p is in right subtree of root node && q is in left Subtree of root node
        if(p->val > root->val && q->val < root->val){
            return root;
        }
        return root;
    }
};