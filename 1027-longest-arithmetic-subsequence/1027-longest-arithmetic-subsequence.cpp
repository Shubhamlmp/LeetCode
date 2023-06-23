class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        vector<unordered_map<int,int>>mp(n);
        for(int i = 1; i < n; i++){
            for(int j = 0; j < i; j++){
                int diff = nums[i]-nums[j];
                int cnt = 1;
                if(mp[j].count(diff)){
                    cnt = mp[j][diff];
                }
                mp[i][diff] = 1+cnt;
                ans = max(ans, mp[i][diff]);
            }
        }
        return ans;
    }
};