class Solution {
public:
    vector<vector<int>> ans;
    void combinedSum(vector<int>& candidates, int target, vector<int>& currComb, int currSum, int idx){
        if(currSum > target) return;
        if(currSum == target) {
            ans.push_back(currComb);
            return;
        }
        
        for(int i = idx; i < candidates.size(); i++){
            currComb.push_back(candidates[i]);
            currSum += candidates[i];
            combinedSum(candidates, target, currComb, currSum, i);
            currComb.pop_back();
            currSum -= candidates[i];
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>currComb;
        combinedSum(candidates, target, currComb, 0, 0);
        return ans;
        
    }
};