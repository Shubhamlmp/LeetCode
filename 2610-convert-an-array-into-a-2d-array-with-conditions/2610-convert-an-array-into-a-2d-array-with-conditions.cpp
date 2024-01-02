class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>ans;
        unordered_map<int,int>mp;
        for(auto x : nums){
            mp[x]++;
        }
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size(); i++){
            vector<int>arr;
            unordered_map<int,int>check;
            for(int j = i; j < nums.size(); j++){
                if(mp.find(nums[j]) != mp.end() && mp[nums[j]] > 0){
                    if(check.find(nums[j]) == check.end()){
                        arr.push_back(nums[j]);
                        check[nums[j]]++;
                        mp[nums[j]]--;
                    }
                }
            }
            if(!arr.empty()) ans.push_back(arr);
        }
        return ans;
    }
};