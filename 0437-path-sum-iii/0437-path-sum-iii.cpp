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
    int target = 0;
    void helper(TreeNode* root, long long targetSum){
        if(root == NULL) return;
        if(targetSum == root->val) target++;
        helper(root->left, targetSum - root->val);
        helper(root->right, targetSum - root->val);
        
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return 0;
        helper(root, targetSum);
        pathSum(root->left, targetSum);
        pathSum(root->right, targetSum);
        return target;
    }
};