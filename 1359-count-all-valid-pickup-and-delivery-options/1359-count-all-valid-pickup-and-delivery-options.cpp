class Solution {
public:
    int countOrders(int n) {
        int MOD = 1e9+7;
        long places = 2 * n;
        long seq = 1;
        for(int i = n; i >= 1; i--){
            seq = ((seq*(places*(places-1)))/2)%MOD;
            places -= 2;
        }
        return (int)seq;
    }
};