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
    TreeNode* buildTreeHelper(vector<int> in, vector<int> pre, int inS, int inE, int preS, int preE){
	if(inS > inE){
		return NULL;
	}
	int rootData = pre[preS];
	int rootIndex = -1;
	for(int i = inS; i <= inE; i++){
		if(in[i] == rootData){
			rootIndex = i;
			break;
		}
	}
	int linS = inS;
	int linE = rootIndex-1;
	int lpreS = preS+1;
	int lPreE = linE - linS + lpreS;
	int rpreS = lPreE+1;
	int rPreE = preE;
	int rinS = rootIndex+1;
	int rinE = inE;

	TreeNode* root = new TreeNode(rootData);
	root->left = buildTreeHelper(in, pre, linS, linE, lpreS, lPreE);
	root->right = buildTreeHelper(in, pre, rinS, rinE, rpreS, rPreE);
	return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int size = preorder.size();
        return buildTreeHelper(inorder, preorder, 0, size-1, 0, size-1);
    }
};