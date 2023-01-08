class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int negCount = 0, posCount = 0;
        for(auto x : nums) {
            if(x < 0){
                negCount++;
            }else if(x > 0) {
                posCount++;
            }
        }
        return max(negCount, posCount);
    }
};