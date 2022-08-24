class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size()-1;
        int furthest = 0;
        int jumps = 0;
        int current = 0;
        for(int i = 0; i < n; i++){
            furthest = max(furthest, nums[i]+i);
            if(i == current){
                current = furthest;
                jumps++;
            }
        }
        return jumps;
    }
};