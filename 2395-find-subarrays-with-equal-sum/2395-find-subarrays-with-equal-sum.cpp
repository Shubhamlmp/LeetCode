class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        if(nums.size() <= 2){
            return false;
        }
        unordered_map<int,int>mp;
        bool flag = false;
        for(int i = 0; i < nums.size()-1; i++){
            int sum = nums[i]+nums[i+1];
            if(mp.count(sum) >= 1){
                flag = true;
                break;
            }
            else{
                mp[sum]++;
            }
        }
        return flag;
    }
};