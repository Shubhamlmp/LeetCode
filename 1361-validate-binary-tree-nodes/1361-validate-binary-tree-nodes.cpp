class Solution {
private:
    int countNode(vector<int>& leftChild, vector<int>& rightChild, int root){
        if(root == -1){
            return 0;
        }
        return 1 + countNode(leftChild,rightChild, leftChild[root])+countNode(leftChild,rightChild, rightChild[root]);
    }
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        vector<int>child(n, 0);
        for(auto it : leftChild){
            if(it != -1) child[it] = 1;
        }
        
        for(auto it : rightChild){
            if(it != -1) {
                if(child[it]) return false;
                child[it] = 1;
            }
        }
        int root = -1;
        for(int i = 0; i < n; i++){
            if(!child[i]){
                if(root == -1) root = i;
                else return false;
                
            }
        }
        if(root == -1){
            return false;
        }

        return countNode(leftChild,rightChild, root) == n;
    }
};