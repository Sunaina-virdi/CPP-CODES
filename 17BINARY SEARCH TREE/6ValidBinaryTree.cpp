//LEET CODE
// QUES NO 98


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

/*
           TREE
root->    (-infinity,infinity)
leftSubtree->   (-infinity,root)
rightSubtree->   (root,infinity)
            100
        70          200
    60     80    150    300
  40               170    400



*/

class Solution{
    public:

    bool solve(TreeNode* root,int lowerBound, int upperBound){
        // base case
        if(root == NULL){
            return true;
        }

        bool cond1 = (root->data > lowerBound);
        bool cond2 = (root->data < upperBound);
        bool leftAns = solve(root->left,lowerBound,root->data);
        bool rightAns = solve(root->right,root->data,upperBound);

        if(cond1 && cond2 && leftAns && rightAns){
            return true;
        }
        else{
            return false;
        }

    }

    bool isValidBST(TreeNode* root){
        int lowerBound = INT_MIN;
        int upperBound = INT_MAX;

        bool ans = solve(root,lowerBound, upperBound);
        return ans;
    }
};