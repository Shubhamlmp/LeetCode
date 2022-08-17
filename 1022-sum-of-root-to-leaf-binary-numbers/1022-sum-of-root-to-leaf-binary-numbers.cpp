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
    int Helper(TreeNode* root, int sum) {
        if(root == NULL){
            return 0;
        }
        sum = (2*sum) + root->val;
        if(root->left == NULL && root->right == NULL){
            return sum;
        }
        return Helper(root->left, sum) + Helper(root->right, sum);
    }
    int sumRootToLeaf(TreeNode* root) {
        return Helper(root, 0);
    }
};