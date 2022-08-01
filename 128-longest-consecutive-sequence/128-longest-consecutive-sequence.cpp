class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int count = 1;
        int maxx = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]){
                continue;
            }
            else if(nums[i] == nums[i-1]+1){
                count++;
            }
            else{
                maxx = max(count, maxx); count = 1;
            }
        }
        return max(maxx, count);
    }
};