class Solution {
public:
    set<vector<int>> ans;
    vector<int> output;
    void helper(vector<int>& nums, int index){
        if(index == nums.size()){
            if(output.size() >= 2){
                ans.insert(output);
                return;
            }
            else{
                return;
            }
        }
        
        if(output.empty() || output.back() <= nums[index]){
            output.push_back(nums[index]);
            helper(nums,index+1);
            output.pop_back();
        }
        helper(nums, index+1);
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        helper(nums, 0);
        return vector(ans.begin(),ans.end());
    }
};