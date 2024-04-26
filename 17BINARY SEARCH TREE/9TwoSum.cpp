//LEET CODE
// QUES NO 653

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
    void storeInorder(TreeNode* root,vector<int> &inorder){
        // base case
        if(root == NULL){
            return;
        }
        // LNR
        storeInorder(root->left,inorder);
        inorder.push_back(root->val);
        storeInorder(root->right,inorder);
    }


    bool findTarget(TreeNode* root,int k){
        vector<int>inorder;
        storeInorder(root,inorder);
        // find target using 2 pointer approach
        int start = 0;
        int end = inorder.size()-1;
        while(start<end){
            int sum = inorder[start] + inorder[end];
            if(sum == k){
                return true;
            }
            else if(sum > k){
                end--;
            }
            else if(sum < k){
                start++;
            }
        }
        return false;
}
};