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
    vector<int>ans;
    void helper(TreeNode* root) {
        if(root == NULL){
            return;
        }
        helper(root->left);
        ans.push_back(root->val);
        helper(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        helper(root);
        sort(ans.begin(),ans.end());
        int mn = INT_MAX;
        for(int i = 0; i < ans.size()-1; i++){
            if(abs(ans[i]-ans[i+1]) < mn){
                mn = abs(ans[i]-ans[i+1]);
            }
        }
        return mn;
    }
};