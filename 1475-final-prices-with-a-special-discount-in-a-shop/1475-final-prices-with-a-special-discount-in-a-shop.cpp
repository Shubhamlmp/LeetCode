class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int>st;
        for(int i = prices.size()-1; i >= 0; i--){
            while(!st.empty() && st.top() > prices[i]){
                st.pop();
            }
            int x = prices[i];
            if(!st.empty()) prices[i] -= st.top();
            st.push(x);
        }
        return prices;
    }
};