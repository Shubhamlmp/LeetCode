class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        vector<int> preSum(travel.size());
        preSum[0] = travel[0];
        for(int i = 1; i < travel.size(); i++){
            preSum[i] = preSum[i-1]+travel[i];
        }
        int m = 0, p = 0, g = 0, ans = 0;
        for(int i = 0; i < garbage.size(); i++){
            string curr = garbage[i];
            for(auto x : curr){
                if(x == 'M') m = i;
                if(x == 'P') p = i;
                if(x == 'G') g = i;
            }
            ans += curr.size();
        }
        if(m >= 1) ans += preSum[m-1];
        if(p >= 1) ans += preSum[p-1];
        if(g >= 1) ans += preSum[g-1];
        
        return ans;
    }
};