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
    void helper(TreeNode* root, int mx, int &count){
        if(root == NULL){
            return;
        }
        if(mx <= root->val){
            mx = root->val;
            count++;
        }
        helper(root->left, mx, count);
        helper(root->right, mx, count);
        
    }
    int goodNodes(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int mx = INT_MIN, count = 0;
        helper(root, mx, count);
        return count;
    }
};