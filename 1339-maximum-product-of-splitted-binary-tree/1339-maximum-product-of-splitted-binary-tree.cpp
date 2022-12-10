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
    int maxProduct(TreeNode* root) {
        long int totalSum = 0;
        getTotalSum(root, totalSum);
        long int maxProd = INT_MIN;
        getmaxProduct(root, totalSum, maxProd);
        return maxProd % 1000000007;
        
    }
    void getTotalSum(TreeNode* root, long int& totalSum){
        if(root == NULL) return;
        totalSum += root->val;
        getTotalSum(root->left, totalSum);
        getTotalSum(root->right, totalSum);
    }
    
    long int getmaxProduct(TreeNode* root, long int totalSum, long int& maxProd){
        if(root == NULL) return 0;
        long int subTreeSum = 0;
        subTreeSum += getmaxProduct(root->left, totalSum, maxProd);
        subTreeSum += getmaxProduct(root->right, totalSum, maxProd);
        subTreeSum += root->val;
        maxProd = max(maxProd, (totalSum - subTreeSum) * subTreeSum);
        return subTreeSum;
    }
};