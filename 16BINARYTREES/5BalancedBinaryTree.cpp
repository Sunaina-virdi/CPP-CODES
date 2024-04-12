// LEET CODE
// QUES NO 110

#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int leftHeight = height(root->left);
        int rightHeight = height (root->right);
        int finalAns = max(leftHeight,rightHeight)  + 1;
        return finalAns;
    }

    bool isBalanced(TreeNode* root) {
        // basec case
        if(root == NULL){
            return true;
        }

        // currnode - solve
        int leftHeight = height (root->left);
        int rightHeight = height(root->right);
        int diff = abs(leftHeight - rightHeight);

        bool currNodeAns = (diff <= 1);

        bool leftAns = isBalanced(root->left);
        bool rightAns = isBalanced(root->right);

        if(currNodeAns && leftAns && rightAns){
            return true;
        }
        else{
            return false;
        }
    }
};