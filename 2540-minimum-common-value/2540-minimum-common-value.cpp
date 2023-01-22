class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(),nums1.end());
        set<int> s2(nums2.begin(),nums2.end());
        map<int,int>mp;
        for(auto x : s1){
            mp[x]++;
        }
        for(auto x : s2){
                mp[x]++;
        }
        int ans = -1;
        for(auto x : mp){
            if(x.second > 1){
                if(ans == -1){
                    ans = x.first;
                }
                else{
                    ans = min(ans, x.first);
                }
            }
        }
        return ans;
    }
};