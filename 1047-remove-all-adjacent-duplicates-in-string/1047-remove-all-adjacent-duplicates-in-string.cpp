class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        string ans = "";
        for(int i = 0; i < s.size(); i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(st.top() != s[i]){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};