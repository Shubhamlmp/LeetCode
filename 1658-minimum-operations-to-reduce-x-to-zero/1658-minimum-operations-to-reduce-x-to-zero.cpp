class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < n; i++){
            sum2 += nums[i];
        }
        sum2 -= x;
        if(sum2 == 0) return nums.size();
        int i = 0, len = 0, j;
        for(j = 0; j < n; j++){
            sum1 += nums[j];
            while(i < n && sum1 > sum2){
                sum1 -= nums[i++];
            }
            if(sum1 == sum2) len = max(len, j-i+1);
        }
        if(!len) return -1;
        return n-len;
    }
};