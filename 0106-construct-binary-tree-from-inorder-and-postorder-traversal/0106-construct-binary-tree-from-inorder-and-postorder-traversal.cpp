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
    TreeNode* buildTreeHelper(vector<int> in, vector<int> post, int inS, int inE, int postS, int postE){
	    if(inS > inE || postS > postE){
		    return NULL;
	    }
	    int rootData = post[postE];
	    TreeNode* root = new TreeNode(rootData);
        
	    int rootIndex = -1;
	    for(int i = inS; i <= inE; i++){
		    if(in[i] == rootData){
			    rootIndex = i;
		    	break;
		    }
	    }
	    // int linS = inS;
	    // int linE = rootIndex-1;
	    // int rinS = rootIndex+1;
	    // int rinE = inE;
	    // int lpostS = postS;
	    // int lpostE = linE-linS+lpostS;
	    // int rpostE = postE-1;
	    // int rpostS = rpostE-inE+rootIndex;
        root->left = buildTreeHelper(in, post, inS, rootIndex-1, postS, postS+rootIndex-inS-1);
 	    root->right = buildTreeHelper(in, post, rootIndex+1, inE, postE+rootIndex-inE, postE-1);
	    return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int size = inorder.size();
        return buildTreeHelper(inorder, postorder, 0, size-1, 0, size-1);
    }
};