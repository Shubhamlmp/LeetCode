class Solution {
public:
    void helper(int idx, int n, int k, vector<int> &temp, vector<vector<int>> &ans){
        if(n == 0 && k == 0){
            ans.push_back(temp);
            return;
        }
        
        if(idx > 9) {
            return;
        }
        
        if(n < 0 || k < 0){
            return;
        }
        helper(idx+1, n, k, temp, ans);
        if(k > 0 && n > 0){
            temp.push_back(idx);
            helper(idx+1, n-idx, k-1, temp, ans);
            temp.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(1, n, k, temp, ans);
        return ans;
    }
};