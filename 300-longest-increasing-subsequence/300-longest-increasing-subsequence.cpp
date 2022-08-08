class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;
        v.push_back(nums[0]);
        for(int i = 1; i < n; i++){
            int j = v.size();
            if(nums[i] > v[j-1]) v.push_back(nums[i]);
            else{
                int it = lower_bound(v.begin(),v.end(), nums[i]) - v.begin();
                if(it < j) v[it] = nums[i];
            }   
        }
        return v.size();
    }
};