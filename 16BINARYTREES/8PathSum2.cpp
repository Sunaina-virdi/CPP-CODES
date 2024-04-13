// LEET CODE
// QUES NO 113
#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution{
public:

void solve(TreeNode* root,int targetSum,vector<vector<int>> &ans,vector<int> temp,int sum){
    // base case
    if(root == NULL){
        return;
    }
    // adding the current node value to temporary vector and updating the sum of elements in the vector
    sum += root->val;
    temp.push_back(root->val);

    if(root->left == NULL && root->right == NULL){
        if(sum == targetSum){
            ans.push_back(temp);
        }
        else{
            return;
        }
    }

    // baaki rec sambhal lega
    solve(root->left,targetSum,ans,temp,sum);
    solve(root->right,targetSum,ans,temp,sum);


}   

    vector<vector<int>>pathSum(TreeNode* root,int targetSum){
        vector<vector<int>>ans;
        vector<int>temp;
        int sum = 0;
        solve(root,targetSum,ans,temp,sum);
        return ans;
    }
};

TreeNode* createBinaryTree(vector<int>& nodes, int index) {
    TreeNode* root = NULL;
    if (index < nodes.size()) {
        if (nodes[index] == -1)
            return NULL;
        root = new TreeNode(nodes[index]);
        root->left = createBinaryTree(nodes, 2 * index + 1);
        root->right = createBinaryTree(nodes, 2 * index + 2);
    }
    return root;
}


int main() {
    vector<int> nodes = {5, 4, 8, 11, -1, 13, 4, 7, 2, -1, -1, 5, 1};
    TreeNode* root = createBinaryTree(nodes, 0);

    int targetSum = 22;

    Solution sol;
    vector<vector<int>> result = sol.pathSum(root, targetSum);

    // Printing the result
    for (auto path : result) {
        for (int i = 0; i < path.size(); ++i) {
            cout << path[i];
            if (i != path.size() - 1)
                cout << ", ";
        }
    }

    return 0;
}
