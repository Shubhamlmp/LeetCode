class Solution {
private:
    vector<vector<int>> ans;
    void permuteUnique(vector<int> nums, int index ,set<vector<int>> &st) {
        if(index == nums.size() && st.find(nums) == st.end()){
            st.insert(nums);
            ans.push_back(nums);
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
        permuteUnique(nums, 0, st);
        return ans;
    }
};