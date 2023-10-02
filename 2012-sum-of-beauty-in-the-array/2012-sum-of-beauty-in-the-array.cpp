class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int n = nums.size();
        int prefixMax = nums[0];
        vector<int> sufix(n,nums[n-1]);
        
        for(int i = n-2; i >= 0; i--){
            sufix[i] = min(sufix[i+1], nums[i]);
        }
        int res = 0;
        for(int i = 1; i < n-1; i++){
            if(prefixMax < nums[i] && nums[i] < sufix[i+1]){
                res += 2;
            }
            else if(nums[i-1] < nums[i] && nums[i] < nums[i+1]){
                res++;
            }
            prefixMax = max(prefixMax, nums[i]);
        }
        return res;
    }
};