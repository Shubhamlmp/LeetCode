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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if(root == NULL){
            return ans;
        }
        
        queue<TreeNode*>q;
        q.push(root);
        int len = 0;
        while(!q.empty()){
            len = q.size();
            vector<int>temp;
            for(int i = 0; i < len; i++){
                TreeNode* node = q.front();
                q.pop();
                temp.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            double num = 0;
            std::fixed;
            std::setprecision(5);
            for(auto x : temp){
                num += x;
            }
            num = (num/temp.size());
            ans.push_back(num);
        }
        return ans;
    }
};