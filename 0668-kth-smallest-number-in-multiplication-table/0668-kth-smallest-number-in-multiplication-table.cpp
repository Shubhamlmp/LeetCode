class Solution {
public:
    int findKthNumber(int m, int n, int k) {
        int l = 0, h = m*n;
        while(l < h){
            int mid = (l+h)/2, count = 0;
            for(int i = 1; i <= m; i++){
                count += min(mid/i, n);
            }
            if(count >= k){
                h = mid;
            }
            else{
                l = mid+1;
            }
        }
        return l;
    }
};