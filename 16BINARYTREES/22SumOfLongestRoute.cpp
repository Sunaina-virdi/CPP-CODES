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

class Solution{
    public:
    pair<int,int> height(TreeNode* root){
        if(!root){
            return {0,0};
        }
        auto lh = height(root->left);
        auto rh = height(root->right);
        int sum = root->data;
        if(lh.first == rh.first){
            sum += lh.second > rh.second ? lh.second : rh.second;
        }
        else if(lh.first > rh.first){
            sum += lh.second;
        }
        else{
            sum += rh.second;
        }
        return {max(lh.first,rh.first)+1,sum};

    }   
    int sumOfLongestToLeafPath(TreeNode* root){
        auto h = height(root);
        return h.second;
    }
};