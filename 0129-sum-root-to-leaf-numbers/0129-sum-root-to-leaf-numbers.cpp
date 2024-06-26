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
    int totalSum = 0;
    void solve(TreeNode* root, int tempSum){
        if(root == NULL){
            return;
        }
        tempSum = tempSum * 10 + root->val;
        if(root->left == NULL && root->right == NULL){
            totalSum += tempSum;
        }
        solve(root->left, tempSum);
        solve(root->right, tempSum);
    }
    int sumNumbers(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        solve(root, 0);
        return totalSum;
    }
};