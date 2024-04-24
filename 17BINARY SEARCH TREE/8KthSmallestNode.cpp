//LEET CODE
// QUES NO 230

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
    int kthSmallest(TreeNode* root,int &k){
        // base case
        if(root == NULL){
            return -1;
        }

        // LNR
        // L
        int leftAns = kthSmallest(root->left,k);
        if(leftAns!=-1){
            return leftAns;
        }

        // N
        k--;
        if(k==0){
            return root->val;
        }
        // R
        int rightAns = kthSmallest(root->right,k);
        // if(rightAns!=-1){
        return rightAns;
        // }
    }
};
