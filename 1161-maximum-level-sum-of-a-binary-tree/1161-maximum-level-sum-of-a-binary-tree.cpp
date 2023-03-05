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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        
        int sum;
        vector<int> level_sum;
        
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
        int ans = INT_MIN;
        int index = 0;
        for(int i = 0; i < n; i++){
            if(ans < level_sum[i]){
                index = i+1;
                ans = level_sum[i];
            }
        }
        return index;
    }
};