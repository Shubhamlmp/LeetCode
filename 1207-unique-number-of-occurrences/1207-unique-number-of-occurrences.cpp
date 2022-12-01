class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto x : arr){
            mp[x]++;
        }
        set<int>st;
        for(auto x : mp){
            if(st.count(x.second)){
                return false;
            }
            st.insert(x.second);
        }
        return true;
    }
};