class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minSum = INT_MAX;
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i; j < nums.size(); j++) {
                int sum = 0, count = 0;
                for(int k = i; k <= j; k++){
                    sum += nums[k];
                    count++;
                }
                
                if(sum > 0 && count >= l && count <= r){
                    minSum = min(minSum, sum);
                }
            }
        }
        return minSum != INT_MAX ? minSum : -1;
    }
};