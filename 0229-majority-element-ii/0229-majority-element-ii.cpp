class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>map;
        for(auto x : nums){
            map[x]++;
        }
        vector<int>ans;
        for(auto x : map){
            if(x.second > n/3){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};