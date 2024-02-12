class Solution {
public:
    void helper(int oc, int cc, string s, int n, vector<string>  &ans){
        if(oc == n && cc == n){
            ans.push_back(s);
            return;
        }
        
        if(oc < n){
            string s1 = s+'(';
            helper(oc+1, cc, s1 , n, ans);
        }
        if(cc < oc){
            string s2 = s+')';
            helper(oc, cc+1, s2, n, ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        helper(0, 0, "", n, ans);
        return ans;
    }
};