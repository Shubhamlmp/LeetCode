class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto x : arr){
            mp[x]++;
        }
        unordered_map<int,int>mp1;
        for(auto x : mp){
            mp1[x.second]++;
        }
        for(auto x : mp1){
            if(x.second > 1){
                return false;
            }
        }
        return true;
    }
};