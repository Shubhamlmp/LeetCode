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
    unordered_map<int,int>map;
    void helper(TreeNode* root){
        if(root == NULL){
            return;
        }
        map[root->val]++;
        helper(root->left);
        helper(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        helper(root);
        vector<int> ans;
        int anss = INT_MIN;
        int freq = INT_MIN;
        for(auto x : map){
            if(x.second > freq){
                freq = x.second;
            }
        }
        for(auto x : map){
            if(x.second == freq) ans.push_back(x.first);
        }
        return ans;
    }
};