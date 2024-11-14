class Solution {
private:
    int shopsNeed(int x, int n, vector<int> quantities) {
        if(x == 0) return 1e9;
        int cnt = 0;
        for(int &amount : quantities){
            if(amount % x == 0) {
                cnt += amount / x;
            } else {
                cnt += amount / x + 1;
            }
        }
        return cnt;
    }
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        if(n == 1)
           return *min_element(quantities.begin(), quantities.end());
        int s = 0;
        int e = *max_element(quantities.begin(), quantities.end());
        int maxi = -1e9;
        while(s <= e){
            int mid = (s + e) / 2;
            if(shopsNeed(mid, n, quantities) <= n) {
                maxi = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }

        return maxi;
    }
};
