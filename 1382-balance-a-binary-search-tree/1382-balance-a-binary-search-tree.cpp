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
    vector<TreeNode*>v;
    void solve(TreeNode* root){
        if(root == NULL) return;
        solve(root->left);
        v.push_back(root);
        solve(root->right);
    }
    
    TreeNode* helper(int s, int e){
        if(s > e) return NULL;
        int m = s + (e-s)/2;
        TreeNode* root = v[m];
        root->left = helper(s, m-1);
        root->right = helper(m+1, e);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        if(root == NULL){
            return NULL;
        }
        solve(root);
        root = helper(0, v.size()-1);
        return root;
    }
};