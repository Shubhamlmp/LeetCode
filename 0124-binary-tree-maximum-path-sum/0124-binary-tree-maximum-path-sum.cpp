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
    int solve(TreeNode* root, int &mx){
        if(root == NULL){
            return 0;
        }
        
        int l = solve(root->left, mx);
        int r = solve(root->right, mx);
        
        int straightPath = max(root->val, max(root->val+ l, root->val+ r));
        int curvedPath = l + r + root->val;
        
        mx = max(mx, max(straightPath, curvedPath));
        return straightPath;
        
    }
    int maxPathSum(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int mx = INT_MIN;
        solve(root, mx);
        return mx;
    }
};