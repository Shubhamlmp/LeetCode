/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root == NULL) return "x";
        string left = serialize(root->left);
        string right = serialize(root->right);
        return to_string(root->val) + "," + left + "," + right;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        queue<string>q;
        string s = "";
        for(int i = 0; i < data.size(); i++){
            if(data[i] == ','){
                q.push(s);
                s = "";
                continue;
            }
            s += data[i];
        }
        if(s.size() > 0) q.push(s);
        return helper(q);
    }
    
    TreeNode* helper(queue<string> &q) {
        string s = q.front();
        q.pop();
        if(s == "x") return NULL;
        // cout << s << " ";
        TreeNode* root = new TreeNode(stoi(s));
        root->left = helper(q);
        root->right = helper(q);
        return root;
    }
};