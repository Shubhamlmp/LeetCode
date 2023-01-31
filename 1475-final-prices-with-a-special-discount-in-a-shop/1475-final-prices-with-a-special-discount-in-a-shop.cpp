class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> ans(n);
        vector<int> check(n);
        for(int i = 0; i < n; i++){
            check.push_back(0);
        }
        for(int i = 0; i+1 < n; i++){
            for(int j = i+1; j < n; j++){
                if(prices[j] <= prices[i]){
                    ans[i] = prices[i] - prices[j];
                    check[i] = 1;
                    break;
                }
            }
            if(check[i] == 0){
                ans[i] = prices[i];
            }
        }
        ans[n-1] = prices[n-1];
        return ans;
    }
};