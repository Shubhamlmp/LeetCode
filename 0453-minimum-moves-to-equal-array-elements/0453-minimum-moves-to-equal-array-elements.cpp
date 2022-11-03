class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minE = INT_MAX;
        for(auto x : nums){
            minE = min(minE, x);
        }
        int sum = 0;
        for(auto x : nums){
            sum += x;
            sum -= minE;
        }
        return sum;
    }
};