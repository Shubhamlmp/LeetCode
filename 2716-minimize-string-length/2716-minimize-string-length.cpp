class Solution {
public:
    int minimizedStringLength(string s) {
        set<int>st;
        
        for(auto x : s){
            st.insert(x);
        }
        return st.size();
    }
};