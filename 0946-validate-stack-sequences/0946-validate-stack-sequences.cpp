class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n = pushed.size();
        int m = popped.size();
        if(n != m){
            return false;
        }
        int i = 0, j = 0;
        stack<int>st;
        while(i < n){
            st.push(pushed[i]);
            while(!st.empty() && st.top() == popped[j]){
                st.pop();
                j++;
            }
            i++;
        }
        return j == n;
    }
};