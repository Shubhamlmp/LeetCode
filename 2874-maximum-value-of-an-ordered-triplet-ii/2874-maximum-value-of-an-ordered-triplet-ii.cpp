class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        vector<int>mxleft(n);
        mxleft[0] = nums[0];
        vector<int>mxright(n);
        mxright[n-1] = nums[n-1];
        int s = nums[0];
        for(int i = 1; i < n; i++){
            mxleft[i] = s;
            s = max(s, nums[i]);
            
        }
        s = nums[n-1];
        for(int i = n-2; i >= 0; i--){
            mxright[i] = s;
            s = max(s, nums[i]);
        }
        long long ans = 0;
        for(int i = 0; i < n-1; i++){
            ans = max(ans, (1LL * (mxleft[i]-nums[i])*mxright[i]));
        }
        return ans;
    }
};