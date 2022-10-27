class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int n = s.size();
        bool flag = false;
        string ans = "";
        for(int i = 0; i < words.size(); i++){
            ans += words[i];
            if(ans.size() == n && ans == s){
                flag = true;
                break;
            }
        }
        return flag;
    }
};