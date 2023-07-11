/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<TreeNode*, TreeNode*>parent;
    void preOrder(TreeNode* curr, TreeNode* par){
        if(curr == NULL){
            return;
        }
        parent[curr] = par;
        preOrder(curr->left, curr);
        preOrder(curr->right, curr);
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        preOrder(root, NULL);
        
        queue<TreeNode*> q;
        q.push(target);
        unordered_set<TreeNode*> visited;
        
        while(!q.empty() && k){
            k -= 1;
            int size = q.size();
            for(int i = 0; i < size; ++i){
                TreeNode* curr = q.front();
                q.pop();
                visited.insert(curr);
                if(!visited.count(curr->left) && curr->left) q.push(curr->left);
                if(!visited.count(curr->right) && curr->right) q.push(curr->right);
                if(!visited.count(parent[curr]) && parent[curr]) q.push(parent[curr]);
            }
        }
        vector<int>ans;
        while(!q.empty()){
            TreeNode* front = q.front();
            ans.push_back(front->val);
            q.pop();
        }
        return ans;
    }
};