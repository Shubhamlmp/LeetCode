class Solution {
public:
    string mapping[10] = {"","","abc","def","ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    void solve(string digits, vector<string>&ans, string output, int idx){
        if(digits.length() == idx){
            ans.push_back(output);
            return;
        }
        int num = digits[idx]-'0';
        string s = mapping[num];
        for(int i = 0; i < s.size(); i++){
            output.push_back(s[i]);
            solve(digits, ans, output, idx+1);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length() == 0){
            return ans;
        }
        string output = "";
        int idx = 0;
        solve(digits, ans, output, idx);
        return ans;
    }
};