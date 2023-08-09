class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>freq;
        int ans = -1;
        for(auto x : nums){
            freq[x]++;
        }
        for(auto x : freq){
            if(x.second == freq.size()-1){
                ans = x.first;
                break;
            }
        }
        return ans;
    }
};