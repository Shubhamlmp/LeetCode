class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans = INT_MAX;
        for(auto i : nums){
            if(abs(i) < abs(ans)){
                ans = i;
            }
            else if(abs(i) == abs(ans)){
                ans = max(ans,i);
            }
        }
        
        return ans;
    }
};