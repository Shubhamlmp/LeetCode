class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans;
        for(auto x : nums){
            mp[x]++;
            if(mp[x] > 1){
                ans = x;
                break;
            }
        }
        return ans;
    }
};