class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k == num.size()) return "0";
        int n = num.size();
        stack<char>st;
        for(char ch : num){
            while(!st.empty() && k > 0 && st.top() > ch){
                st.pop(); k-=1;
            }
            if(!st.empty() || ch != '0'){
                st.push(ch);
            }
        }
        while(!st.empty() && k--){
            st.pop();
            if(st.empty()){
                return "0";
            }
        }
        int sz = st.size();
        while(!st.empty()){
            num[n-1] = st.top();
            st.pop();
            n-=1;
        }
        return sz == 0 ? "0": num.substr(n);
    }
};