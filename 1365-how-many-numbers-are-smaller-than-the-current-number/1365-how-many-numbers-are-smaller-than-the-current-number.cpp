class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v;
        int n = nums.size();
        int count;
        for(int i = 0; i < n; i++){
            count = 0;
            for(int j = 0; j < n; j++){
                if(i != j){
                    if(nums[i]> nums[j]){
                        count++;
                    }
                }
            }
        v.push_back(count);
            
        }
        return v;
        
    }
};