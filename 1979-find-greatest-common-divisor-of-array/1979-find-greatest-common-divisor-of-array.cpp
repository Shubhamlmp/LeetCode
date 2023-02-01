class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minn = INT_MAX;
        int maxx = INT_MIN;
        for(auto x : nums){
            minn = min(x, minn);
            maxx = max(x, maxx);
        }
        return gcd(minn,maxx);
    }
};