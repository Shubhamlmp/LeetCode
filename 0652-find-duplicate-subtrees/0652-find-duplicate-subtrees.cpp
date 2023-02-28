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
    unordered_map<string, int> mp;
    vector<TreeNode*> ans;
    string fun(TreeNode *p)
    {
        if(!p){
            return "";
        }
        string s = to_string(p->val) + "|" + fun(p->left) + "|" + fun(p->right);
        mp[s] ++;
        if(mp[s] == 2){
            ans.push_back(p);
        } 
        return s;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        fun(root);
        return ans;
    }
};