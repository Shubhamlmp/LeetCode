class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        sort(nums.begin(),nums.end());
        if(n%2 == 0){
            int minE = nums[n/2-1];
            for(auto x : nums){
                sum += abs(x-minE);
            }
        }
       if(n%2 == 1){
            int minE = nums[n/2];
            for(auto x : nums){
                sum += abs(x-minE);
            }
        }
        return sum;
    }
};