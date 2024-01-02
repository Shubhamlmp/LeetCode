class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>ans;
        unordered_map<int,int>mp;
        for(auto x : nums){
            mp[x]++;
        }
        while(!mp.empty()){
            vector<int>arr;
            for(auto it = mp.begin(); it != mp.end();){
                arr.push_back(it->first);
                it->second--;
                if(it->second == 0){
                    it = mp.erase(it);
                }
                else{
                    ++it;
                }
            }
            ans.push_back(arr);
        }
        return ans;
    }
};