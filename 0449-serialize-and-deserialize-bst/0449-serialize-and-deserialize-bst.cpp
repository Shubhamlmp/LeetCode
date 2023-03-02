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
private:
    string encode(TreeNode* root) {
        if(root == NULL){
            return "";
        }
        return to_string(root->val) + "-" + encode(root->left) + encode(root->right);
    }
    TreeNode* insert(TreeNode* root, int data) {
        if(root == NULL){
            TreeNode* temp = new TreeNode(data);
            return temp;
        }
        if(data < root->val){
            root->left = insert(root->left, data);
        }
        else{
            root->right = insert(root->right, data);
        }
        return root;
    }
    
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        return encode(root);
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        stringstream ss(data);
        string temp;
        TreeNode* root = NULL;
        while(getline(ss, temp, '-')){
            root = insert(root, stoi(temp));
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;