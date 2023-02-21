class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto x : nums){
            m[x]++;
        }
        int ans ;
        for(auto x : m){
            if(x.second == 1){
                ans = x.first;
            }
        }
        return ans;
    }
};