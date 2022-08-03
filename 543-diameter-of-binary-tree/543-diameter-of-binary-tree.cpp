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
    int ans = 0;
   int height(TreeNode* root) {
       if(root == NULL){
           return 0;
        }   
       int h1 = height(root->left);
       int h2 = height(root->right);
       ans = max(ans, 1+h1+h2);
        return 1 + max(h1, h2);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return ans-1;
    }
};