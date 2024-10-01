class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(auto x : arr){
            int rem = x%k;
            if(rem < 0) {
                rem += k;
            }
            if(rem == 0) {
                if(mp.count(rem) > 0) {
                    mp.erase(rem);
                }
            } else {
                if(mp.count(k-rem) > 0) {
                    mp[k-rem]--;
                    if(mp[k-rem] == 0){
                        mp.erase(k-rem);
                    }
                } else {
                    mp[rem]++;
                }
            }
        }
        if(mp.size() != 0) return false;
        return true;
    }
};