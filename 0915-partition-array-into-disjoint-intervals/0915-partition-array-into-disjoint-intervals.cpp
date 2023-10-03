class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        vector<int>left(nums.size());
        vector<int>right(nums.size());
        left[0] = nums[0];
        for(int i = 1; i < nums.size(); i++){
            left[i] = max(left[i-1], nums[i]);
        }
        right[nums.size()-1] = nums[nums.size()-1];
        for(int i = nums.size()-2; i >= 0; i--){
            right[i] = min(right[i+1], nums[i]);
        }
        int count = 0;
        for(int i = 0; i+1 < nums.size(); i++){
            if(left[i] <= right[i+1] ){
                return i+1;
            }
        }
        return -1;
    }
};