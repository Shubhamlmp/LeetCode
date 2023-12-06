class Solution {
public:
    int totalMoney(int n) {
        int ans = 0;
        int count = 1;
        for(int i = 1; i <= n; i++){
            if(i > 7){
                ans += i - (7*count) + count;
                if(i%7 == 0){
                    count  = i/7;
                }
            }
            else{
                ans += i;
            }
        }
        return ans;
    }
};