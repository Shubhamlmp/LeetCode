class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n = nums.size();
        if(n == 0){
            return 0;
        }
        int cnt = 0,sum = 0;
        int i = 0;
        unordered_map<int,int>mp;
        while(i < n){
            sum += nums[i];
            if(sum == k){
                cnt++;
            }
            if(mp.find(sum-k) != mp.end()){
                cnt += mp[sum-k];
            }
            mp[sum]++;
            i++;
        }
        return cnt;
    }
};