class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int maxCount = INT_MIN;
        int count = 0;
        unordered_set<int>set;
        for(int i = 0, j = 0; j < nums.size(); j++){
            while(set.find(nums[j]) != set.end()){
                set.erase(nums[i]);
                count -= nums[i];
                i++;
            }
            set.insert(nums[j]);
            count += nums[j];
            maxCount = max(maxCount,count);
        }
        return maxCount;
    }
};