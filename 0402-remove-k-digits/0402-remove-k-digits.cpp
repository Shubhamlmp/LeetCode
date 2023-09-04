class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        if(k == n) return "0";
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
        }
        if(st.size() == 0) return "0";
        
        while(!st.empty()){
            num[n-1] = st.top();
            st.pop();
            n-=1;
        }
        return num.substr(n);
    }
};