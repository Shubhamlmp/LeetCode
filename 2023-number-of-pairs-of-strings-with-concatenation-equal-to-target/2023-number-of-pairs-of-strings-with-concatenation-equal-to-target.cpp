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
            for(int j = i+1; j < nums.size(); j++){
                if(isValidPair(nums[i],nums[j],target)){
                    ans++;
                }
                if(isValidPair(nums[j],nums[i],target)){
                    ans++;
                }
            }
        }
        return ans;
    }
};