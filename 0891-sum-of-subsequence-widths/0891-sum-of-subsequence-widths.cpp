class Solution {
public:
    int sumSubseqWidths(vector<int>& nums) {
        long long int ans = 0;
        int n=nums.size();
        sort(nums.begin(),nums.end());    
        long long int mod=1000000007;
        int j = n-1;
        long long int p = 1;
        for(int i = 0; i < n; i++){
            ans = (ans + nums[i]*p - nums[j]*p)%mod;
            j--;
            p = (p*2)%mod;
        }
        return (int)(ans);
    }
};