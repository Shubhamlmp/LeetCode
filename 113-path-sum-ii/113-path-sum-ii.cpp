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
    void dfs(TreeNode* root, int targetSum, vector<int> curr, int preSum) {
        if(root == NULL) return;
        
        preSum += root->val;
        curr.push_back(root->val);
        if(preSum == targetSum && root->left == NULL && root->right == NULL){
            res.push_back(curr);
        }
        dfs(root->left, targetSum, curr, preSum);
        dfs(root->right, targetSum, curr, preSum);
        curr.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        dfs(root, targetSum, {}, 0);
        return res;
    }
private:
    vector<vector<int>>res;
};