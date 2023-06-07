class Solution {
private:
    void permuteUnique(vector<int> nums, int index ,set<vector<int>> &st) {
        if(index == nums.size()){
            st.insert(nums);
            return;
        }
        for(int i = index; i < nums.size(); i++){
            swap(nums[index], nums[i]);
            permuteUnique(nums, index+1, st);
            swap(nums[index], nums[i]);
        }   
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>st;
        int index = 0;
        vector<vector<int>> ans;
        permuteUnique(nums, index, st);
        for(auto x : st){
            ans.push_back(x);
        }
        return ans;
    }
};