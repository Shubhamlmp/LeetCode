/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int traverse(Node* root){
        int count = 0;
        for(int i = 0; i < root->children.size(); i++){
            int depth = traverse(root->children[i]);
            if(depth > count){
                count = depth;
            }
        }
        return count+1;
    }
    int maxDepth(Node* root) {
        if(root == NULL){
            return 0;
        }
        int count = 0;
        return traverse(root);
    }
};