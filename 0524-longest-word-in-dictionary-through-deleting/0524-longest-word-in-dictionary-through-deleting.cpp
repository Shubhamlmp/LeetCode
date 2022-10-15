class Solution {
public:
    bool isSubsequence(string S, string d) {
        int i = 0, j = 0;
        while(i < S.size() && j < d.size()){
            if(S[i] == d[j]){
                j++;
            }
            i++;
        }
        return j == d.size();
    }
    string findLongestWord(string s, vector<string>& dictionary) {
        string res = "";
        for(auto x : dictionary){
            if(isSubsequence(s, x)){
                if(x.size() > res.size() || x.size() == res.size() && x < res){
                    res = x;
                }
            }
        }
        return res;
    }
};