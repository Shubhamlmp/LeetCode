class Solution {
public:
    void findCombination(int idx, int target, vector<int>& can, vector<vector<int>> &ans, vector<int> &temp){
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        for(int i = idx; i < can.size(); i++){
            if(i > idx && can[i] == can[i-1]) continue;
            if(can[i] > target) break;
            temp.push_back(can[i]);
            findCombination(i+1, target-can[i], can, ans, temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        findCombination(0, target, candidates, ans, temp);
        return ans;
    }
};