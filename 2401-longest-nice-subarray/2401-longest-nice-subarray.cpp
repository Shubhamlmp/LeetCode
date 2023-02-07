class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            int temp = nums[i];
            int count = 1;
            for(int j = i; j < nums.size()-1; j++){
                if((temp xor nums[j+1]) == (temp + nums[j+1])){
                    temp += nums[j+1];
                    count++;
                }
                else{
                    break;
                }
            }
            ans = max(ans, count);
        }
        return ans;
    }
};