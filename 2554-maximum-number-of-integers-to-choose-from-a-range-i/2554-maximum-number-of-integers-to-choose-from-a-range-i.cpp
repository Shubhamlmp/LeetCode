class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_map<int,int>mp;
        for(auto x : banned){
            mp[x]++;
        }
        
        int cnt = 0;
        for(int i = 1; i <= n; i++){
            if(mp.find(i) == mp.end() && i <= maxSum){
                cnt++;
                maxSum -= i;
            }
        }
        return cnt;
    }
};