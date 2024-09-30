class Solution {
public:
    int minElement(vector<int>& nums) {
        int minn = INT_MAX;
        for(auto x : nums){
            int num = getSum(x);
            minn = min(minn, num);
        }
        return minn;
    }
    
    int getSum(int n){
        int ans = 0;
        while(n){
            ans += n%10;
            n /= 10;
        }
        return ans;
    }
};