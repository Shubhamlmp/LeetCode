class Solution {
public:
    void findCombination(int idx, int target, vector<int>& can, vector<vector<int>> &ans, vector<int> &temp){
        if(idx == can.size()){
            if(target == 0){
                ans.push_back(temp);
            }
            return;
        }
        if(can[idx] <= target){
            temp.push_back(can[idx]);
            findCombination(idx, target-can[idx], can, ans, temp);
            temp.pop_back();
        }
        findCombination(idx+1, target, can, ans, temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>temp;
        findCombination(0, target, candidates, ans, temp);
        return ans;
    }
};