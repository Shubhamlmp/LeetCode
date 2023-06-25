class Solution {
public:
    int firstDigit(int n){
        while(n >= 10){
            n /=10;
        }
        return n;
    }
    int lDigit(int n){
        return n%10;
    }
    int countBeautifulPairs(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                int x = firstDigit(nums[i]);
                int y = lDigit(nums[j]);
                if(__gcd(x,y) == 1){
                    ans++;
                }
            }
        }
        return ans;
    }
};