class Solution {
public:
    bool isValidPair(string s1, string s2, string target) {
        if(s1+s2 == target){
            return true;
        }
        return false;
    }
    int numOfPairs(vector<string>& nums, string target) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(i == j) {
                    continue;
                }
                if(isValidPair(nums[i],nums[j],target)){
                    ans++;
                }
            }
        }
        return ans;
    }
};