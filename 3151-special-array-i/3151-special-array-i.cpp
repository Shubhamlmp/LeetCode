class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        bool ans = true;
        bool prevOdd = false;
        bool prevEven = false;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]%2 == 0){
                if(prevEven){
                    return false;
                }
                else{
                    prevEven = true;
                    prevOdd = false;
                }
            }
            else{
                if(prevOdd){
                    return false;
                }
                else{
                    prevOdd = true;
                    prevEven = false;
                }
            }
        }
        return ans;
    }
};