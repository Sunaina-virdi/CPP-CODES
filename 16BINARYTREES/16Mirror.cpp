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

    bool isMirror(TreeNode* p,TreeNode*q){

        // if(!p && !q){ //babbar
        //     return false;
        // }
        if(!p && !q){
            return true;
        }
        if(p==NULL || q==NULL){
            return false;
        }
        if(p && q){
            return p->val == q->val
                && isMirror(p->left,q->right)
                && isMirror(p->right,q->left);
        }
        return false;
    }

    bool isSymmetry(TreeNode* root) { 
        return isMirror(root->left,root->right);
    }
};