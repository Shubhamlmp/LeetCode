class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        unordered_map<int,int>m;
        int ans = 0;
        for(int i = 0; i < hours.size(); i++){
            int rem = hours[i]%24;
            if(rem != 0){
                ans += m[24-rem];
            } else {
                ans += m[rem];
            }
            
            m[rem]++;
        }
        return ans;
    }
};