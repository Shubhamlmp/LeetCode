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
    int diff = INT_MAX;
    TreeNode* prev = NULL;
    void helper(TreeNode* root) {
        if(root->left) helper(root->left);
        if(prev) if(abs(prev->val - root->val) < diff) diff = abs(prev->val - root->val); 
        prev = root;
        if(root->right) helper(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        helper(root);
        return diff;
    }
};