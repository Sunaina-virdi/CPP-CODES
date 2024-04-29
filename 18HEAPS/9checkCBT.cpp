// LEET CODE
// QUES NO 958
// DIFFICULT
// agr kisi node se phle null aata h toh cbt nhi h{NOT A CBT}
#include<iostream>
#include<queue>
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
class Solution{
public:
    bool levelOrderTraversal(TreeNode* root){
        queue<TreeNode*>q;
        q.push(root);
        bool nullFound = false;
        while(!q.empty()){
            TreeNode* front = q.front();
            q.pop();

            if(front->left == NULL){
                nullFound = true;
            }   
            else{
                if(nullFound){
                    return false;
                }
                q.push(front->left);
                q.push(front->right);
            }
        }
        return true;
    }
    bool isCompleteTree(TreeNode* root){
        return levelOrderTraversal(root);
    }
};
