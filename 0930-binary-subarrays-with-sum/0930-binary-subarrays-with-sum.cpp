class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int count = 0;
        int sum = 0;
        unordered_map<int,int>mp;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            if(sum == goal){
                count++;
            }
            if(mp.find(sum-goal) != mp.end()){
                count += mp[sum-goal];
            }
            if(mp.find(sum) != mp.end()){
                mp[sum]++;
            }
            else{
                mp[sum] = 1;
            }
        }
        return count;
    }
};