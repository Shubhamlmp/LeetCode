class Solution {
public:
    bool isPrime(int n){
        if(n <= 2 || n%2 == 0){
            return n == 2;
        }
        for(int i = 3; i*i <= n; i += 2){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
    
    int diagonalPrime(vector<vector<int>>& nums) {
        int ans = 0;
        int n = nums.size();
        for(int i = 0; i < nums.size(); i++){
            ans = max({ans, isPrime(nums[i][i]) * nums[i][i],isPrime(nums[i][n-i-1]) * nums[i][n-i-1]});
        }
        return ans;
    }
};