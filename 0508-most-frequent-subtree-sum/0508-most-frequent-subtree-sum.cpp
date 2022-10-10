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
    int treeHelper(TreeNode* root, unordered_map<int,int>&mp) {
        if(root == NULL){
            return 0;
        }
        int sum = root->val;
        int left = treeHelper(root->left, mp);
        int right = treeHelper(root->right, mp);
        sum += left+right;
        mp[sum]++;
        return sum;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        unordered_map<int,int>mp;
        treeHelper(root, mp);
        
        vector<int>ans;
        int maxx = INT_MIN, temp;
        for(auto x:mp){
            if(x.second > maxx){
                maxx = x.second;
            }
        }
        for(auto x : mp){
            if(x.second == maxx){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};