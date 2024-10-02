class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {
        sort(maximumHeight.begin(), maximumHeight.end());
        long long ans = 0;
        int n = maximumHeight.size();
        int last = INT_MAX;
        for(int i = n-1; i >= 0; i--){
            if(maximumHeight[i] < last) ans += maximumHeight[i], last = maximumHeight[i];
            else ans += last - 1, last -= 1;
            if(last <= 0) {
                return -1;
            }
        }
        return ans;
    }
};