class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        unordered_set<int>st;
        for(auto num: nums) {
            int n = num, i = 2;
            while(n > 1){
                while(n%i == 0){
                    st.insert(i);
                    n /= i;
                }
                i++;
            }
        }
        return st.size();
    }
};