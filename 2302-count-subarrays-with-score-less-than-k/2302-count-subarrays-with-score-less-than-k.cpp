class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long int ans = 0, sum = 0;
        int j = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            while(sum * (i-j+1) >= k){
                sum -= nums[j];
                j++;
            }
            ans += i-j+1;
        }
        return ans;
    }
};