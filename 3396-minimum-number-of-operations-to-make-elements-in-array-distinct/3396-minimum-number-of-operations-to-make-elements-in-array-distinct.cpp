class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans = 0;
        int i = 0;
        while(i < nums.size()){
            unordered_map<int, int>mp;
            bool isDist = true;
            for(int j = i; j < nums.size(); j++){
                if(mp[nums[j]] >= 1) {
                    isDist = false;
                    break;
                } else {
                    mp[nums[j]]++;
                }
            }
            if(!isDist){
                i += 3;
                ans++;
            } else {
                return ans;
            }
        }
        return ans;
    }
};