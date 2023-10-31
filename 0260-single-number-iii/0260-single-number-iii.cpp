class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>map;
        for(auto x : nums){
            map[x]++;
        }
        vector<int>ans;
        for(auto x : map){
            if(x.second == 1){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};