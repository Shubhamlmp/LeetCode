class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i; j < nums.size(); j++){
                unordered_map<int,int>mp;
                for(int k = i; k <= j; k++){
                    mp[nums[k]]++;
                }
                ans += mp.size()*mp.size();
            }
        }
        return ans;
    }
};