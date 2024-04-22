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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root){
        vector<vector<int>> ans;
        if(root == NULL){
            return ans;
        }
        bool LtoRdir = true;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int width = q.size();
            vector<int>oneLevel(width);
            for(int i=0;i<width;i++){
                TreeNode* front = q.front();
                q.pop();
                int index = LtoRdir ? i : width - i -1;
                oneLevel[index] = front->val;
                if(front->left){
                    q.push(front->left);
                }
                if(front->right){
                    q.push(front->right);
                }
            }
            // toggle the direction
            LtoRdir = !LtoRdir;
            ans.push_back(oneLevel);
        }
        return ans;
    }
};

int main(){

return 0;
}