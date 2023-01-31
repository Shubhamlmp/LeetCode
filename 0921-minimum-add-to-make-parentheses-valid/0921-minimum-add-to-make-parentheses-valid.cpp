class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int count = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push('(');
            }
            else if(s[i] == ')'){
                if(st.empty()){
                    count++;
                }
                else if(st.top() == '('){
                    st.pop();
                }
            }
        }
        return count+st.size();
    }
};