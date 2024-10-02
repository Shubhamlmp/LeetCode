class Solution {
public:
    long long maximumTotalSum(vector<int>& maxH) {
        sort(maxH.begin(), maxH.end());
        long long ans = 0;
        int n = maxH.size();
        int last = 0;

        for(int i = n-1; i >= 0; i--){
            int num = maxH[i];
            if(i == n-1){
                ans += num;
            } else{
                if(num < last){
                    ans += num;
                } else {
                    last -= 1;
                    ans += last;
                    num = last;
                }
            }
            if(num <= 0) {
                ans = -1;
                break;
            }
            last = num;
        }
        return ans;
    }
};