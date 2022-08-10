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
    void vect(vector<int> &v, TreeNode* node){
        if(node == NULL) return;
        vect(v, node->left);
        v.push_back(node->val);
        vect(v, node->right);
    }
    int minDiffInBST(TreeNode* root) {
        vector<int> v;
        vect(v, root);
        int minVal = INT_MAX;
        int n = v.size();
        for(int i = 1; i < n; i++){
            minVal = min(minVal, v[i] - v[i-1]);
        }
        return minVal;
    }
};