// leet code
// ques no 124
class Solution {
public:

    int maxSum;
    int solve(TreeNode* root){
        // base case
        if(root == NULL){
            return 0;
        }
        int left = solve(root->left);
        int right = solve(root->right);
        // case 1
        int res1 = left + right + root->val;
        // case 2
        int res2 = max(left,right) + root->val;
        // case 3 
        int res3 = root->val;
        // Find max sum from all
        maxSum = max({maxSum,res1,res2,res3});
        return max(res2,res3);
    }

    int maxPathSum(TreeNode* root) {
        maxSum = INT_MIN;
        solve(root);
        return maxSum;
    }
};