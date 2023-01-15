class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int eSum = 0;
        for(auto x : nums){
            eSum += x;
        }
        int dSum = 0;
        for(auto x : nums){
            if(x <= 9){
                dSum += x;
            }
            else{
                while(x){
                dSum += x%10;
                x /= 10;
            }
            }
        }
        return eSum - dSum;
    }
};