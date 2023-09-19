class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x : nums){
            mp[x]++;
        }
        int ans;
        for(auto x : mp){
            if(x.second > 1)
                ans = x.first;
        }
        return ans;
    }
};