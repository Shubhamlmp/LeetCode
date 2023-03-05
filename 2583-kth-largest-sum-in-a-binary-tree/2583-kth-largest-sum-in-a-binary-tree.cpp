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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*> q;
        q.push(root);
        
        long long sum;
        vector<long long> level_sum;
        
        while(!q.empty()){
            int n = q.size();
            sum = 0;
            for(int i = 0; i < n; i++){
                TreeNode* front = q.front();
                q.pop();
                sum += front->val;
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
            level_sum.push_back(sum);
        }
        int n = level_sum.size();
        if(n < k) return -1;
        sort(level_sum.begin(),level_sum.end());
        return level_sum[n-k];
    }
};