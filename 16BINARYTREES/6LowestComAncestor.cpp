// LEET CODE
// QUES NO 236

class Solution{
    public:
    TreeNode* lowestCommonAncestor(TreeNode* root,TreeNode* p,TreeNode* q){
        if(root == NULL){
            return NULL;
        }
        if(root->val == p->val){
            return p;
        }
        if(root->val == q->val){
            return q;
        }
        TreeNode *left = lowestCommonAncestor(root->left ,p ,q);
        TreeNode* right = lowestCommonAncestor(root->right,p,q);

        if(left == NULL && right == NULL){
            return NULL;
        }
        else if(left != NULL && right == NULL){
            return left;
        }
        else if(left == NULL && right != NULL){
            return right;
        } 
        else{
            return root;
        }

    } 
};

