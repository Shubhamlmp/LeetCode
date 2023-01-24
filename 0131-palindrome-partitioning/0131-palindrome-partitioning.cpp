class Solution {
private:
    bool isPalindrome(string s){
        int l = 0;
        int r = s.size()-1;
        while(l < r){
            if(s[l] != s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    void helper(string s, vector<vector<string>> &result, vector<string> temp){
        if(s.size() == 0){
            result.push_back(temp);
        }
        for(int i = 0; i < s.size(); i++){
            string leftPart = s.substr(0,i+1);
            if(isPalindrome(leftPart)){
                temp.push_back(leftPart);
                helper(s.substr(i+1), result, temp);
                temp.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> temp;
        helper(s,result,temp);
        return result;
    }
};