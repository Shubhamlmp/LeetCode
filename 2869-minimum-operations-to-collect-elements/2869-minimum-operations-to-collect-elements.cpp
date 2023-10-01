class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int>values;
        int moves = 0;
        for(int i = nums.size()-1; i >= 0; i--){
            moves++;
            if(nums[i] <= k){
                values.insert(nums[i]);
            }
            if(values.size() == k){
                return moves;
            }
        }
        return 0;
    }
};