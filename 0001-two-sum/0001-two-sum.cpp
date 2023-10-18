class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i = 0; i < nums.size(); i++){
            int num = target-nums[i];
            if(mp.find(num) != mp.end()){
                nums.clear();
                nums.push_back(i);
                nums.push_back(mp[num]);
            }
            mp[nums[i]] = i;
        }
        return nums;
    }
};