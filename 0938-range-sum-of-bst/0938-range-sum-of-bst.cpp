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
    int sum = 0;
public:
    void inOrder(TreeNode* root, int low, int high) {
        if(root == NULL) return;
        if(root->val >= low && root->val <= high){
            sum += root->val;
        }
        inOrder(root->left, low, high);
        inOrder(root->right, low, high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        inOrder(root, low, high);
        return sum;
    }
};