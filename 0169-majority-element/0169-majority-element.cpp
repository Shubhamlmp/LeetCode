class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxx = INT_MIN;
        int num;
        unordered_map<int,int>mp;
        for(auto x : nums){
            mp[x]++;
        }
        
        for(auto x : mp){
            if(x.second > maxx){
                num = x.first;
                maxx = x.second;
            }
        }
        return num;
    }
};