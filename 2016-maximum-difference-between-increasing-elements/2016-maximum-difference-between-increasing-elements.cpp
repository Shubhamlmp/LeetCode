class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int diff = 0;
        
        for(int i = 0; i < nums.size()-1; i++){
            for(int j = i+1; j < nums.size(); j++){
                if(i < j){
                    diff = max(diff, nums[j] - nums[i]);    
                }
            }
        }
        if(diff > 0) return diff;
        else return -1;
    }
};