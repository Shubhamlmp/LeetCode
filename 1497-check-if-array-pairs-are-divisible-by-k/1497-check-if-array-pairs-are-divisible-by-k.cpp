class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(auto x : arr){
            int rem = x%k;
            if(rem < 0) {
                rem += k;
            }
            mp[rem]++;
        }
        
        for(auto x : mp){
            if(x.first == 0){
                if(x.second%2 != 0) {
                    return false;
                }
            } else {
                if(mp[x.first] != mp[k-x.first]) {
                    return false;
                }
            }
        }
        return true;
    }
};