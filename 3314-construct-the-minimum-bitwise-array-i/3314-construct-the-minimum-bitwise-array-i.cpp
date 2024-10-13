class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>a;
        for(auto num : nums){
            int ans = -1;
            for(int x = 0; x <= num; x++){
                if((x | (x+1)) == num){
                    ans = x;
                    break;
                }
            }
            a.push_back(ans);
        }
        return a;
    }
};