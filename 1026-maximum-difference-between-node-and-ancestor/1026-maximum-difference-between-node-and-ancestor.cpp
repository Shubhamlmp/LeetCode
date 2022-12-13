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
    
    int solver(TreeNode* root, int currMin, int currMax) {
        if(root == NULL) return currMax - currMin;
        
        currMin = min(root->val, currMin);
        currMax = max(root->val, currMax);
        
        int left = solver(root->left, currMin, currMax);
        int right = solver(root->right, currMin, currMax);
        
        return max(left, right);
    }
    int maxAncestorDiff(TreeNode* root) {
        if(root == NULL) return 0;
        return solver(root, root->val, root->val);
    }
};