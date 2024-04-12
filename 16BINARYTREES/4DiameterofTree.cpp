// LEET CODE 
// QUES NO 543

#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class solution{
    public:

    int height(TreeNode* root){
        if(root == NULL){
                return 0;
            }
            int leftHeight = height(root->left);
            int rightHeight = height(root->right);
            int height = max(leftHeight,rightHeight) + 1;
            return height;
    }
    int diameterOfBinaryTree(TreeNode* root){
        // base case
        if(root == NULL){
            return 0;
        }

        int option1 = diameterOfBinaryTree(root->left);
        int option2 = diameterOfBinaryTree(root->right);
        int option3 = height(root->left) + height(root->right);
        int diameter = max(option1,option2,option3);
        return diameter;
    }
};



