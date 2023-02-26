/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool dfs(TreeNode* root, int limit, int sumSoFar) {
        if(root == NULL){
            return true;
        }
        if(sumSoFar+root->val < limit && root->left == NULL && root->right == NULL){
            return true;
        }
        if(sumSoFar+root->val >= limit && root->left == NULL && root->right == NULL){
            return false;
        }
        bool left = false;
        bool right = false;
        left = dfs(root->left, limit, sumSoFar+root->val);
        right = dfs(root->right, limit, sumSoFar+root->val);
        if(left){
            root->left = NULL;
        }
        if(right){
            root->right = NULL;
        }
        return right && left;
    }
    TreeNode* sufficientSubset(TreeNode* root, int limit) {
        if(root == NULL){
            return NULL;
        }
        bool res = dfs(root, limit,0);
        if(res){
            return NULL;
        }
        else{
            return root;
        }
    }
};