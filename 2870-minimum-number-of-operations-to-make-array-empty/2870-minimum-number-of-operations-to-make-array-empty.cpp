class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto x : nums){
            m[x]++;
        }
        int ans = 0;
        for(auto x : m){
            if(x.second == 1){
                return -1;
            }
            ans += x.second/3 + (x.second%3 > 0);
        }
        return ans;
    }
};