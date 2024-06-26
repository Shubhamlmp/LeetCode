class Solution {
public:
    int kthFactor(int n, int k) {
        if(n == 1 && k == 1){
            return 1;
        }
        int ans = -1;
        int count = 0;
        for(int i = 1; i <= n; i++){
            if(n%i == 0){
                ++count;
                if(count == k){
                    ans = i;
                    break;
                }
            }
        }
        
        if(ans == -1 && n <= k){
            return -1;
        }
        
        return ans;
    }
};