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
    TreeNode* helper(vector<int>& nums, int i , int j) {
        if(i > j){
            return NULL;
        }
        int index = 0;
        int a = INT_MIN;
        for(int k = i; k <= j; k++){
            if(nums[k] > a){
                index = k;
                a = nums[k];
            }
        }
        TreeNode* root = new TreeNode(nums[index]);
        root->left = helper(nums, i, index-1);
        root->right = helper(nums, index+1, j);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return helper(nums, 0, nums.size()-1);
    }
};