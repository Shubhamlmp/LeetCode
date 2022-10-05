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
    TreeNode* addOneRow(TreeNode* root, int val, int depth, int curr = 0) {
        if(depth == 1){
            TreeNode* newRoot = new TreeNode(val);
            if(curr == 0){
                newRoot->left = root;
            }
            else{
                newRoot->right = root;
            }
            return newRoot;
        }
        if(root == NULL) return NULL;
        root->left = addOneRow(root->left, val, depth-1, 0);
        root->right = addOneRow(root->right, val, depth-1, 1);
        return root;
    }
};