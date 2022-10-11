class Solution {
public:
    int longestValidParentheses(string s) {
        if(s.size() == 0){
            return 0;
        }
        int maxx = 0;
        stack<int> ans;
        ans.push(-1);
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                ans.push(i);
            }
            else{
                ans.pop();
                if(ans.empty()){
                    ans.push(i);
                }
                else{
                    maxx = max(maxx, i - ans.top());
                }
            }
        }
        return maxx;
    }
};