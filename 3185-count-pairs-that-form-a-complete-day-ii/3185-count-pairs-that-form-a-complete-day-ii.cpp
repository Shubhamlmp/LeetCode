class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        unordered_map<long,int>m;
        long long ans = 0;
        for(int i = 0; i < hours.size(); i++){
            int rem = hours[i]%24;
            if(rem != 0){
                ans += m[(24-rem)%24];
            } else {
                ans += m[rem%24];
            }
            
            m[rem%24]++;
        }
        return ans;
    }
};