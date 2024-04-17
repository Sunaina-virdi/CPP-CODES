// LEET CODE
// QUES NO 100
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

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q){
            return true;
        }
        if(p && q){
            return p->val == q->val
                && isSameTree(p->left,q->left)
                && isSameTree(p->right,q->right);
        }
        return false;
    }
};