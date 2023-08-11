class Solution {
public:
    string sortVowels(string s) {
        vector<char>vow;
        vector<int>idx;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] =='o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U'){
                vow.push_back(s[i]);
                idx.push_back(i);
            }
        }
        sort(vow.begin(),vow.end());
        string ans = s;
        for(int i = 0; i < idx.size(); i++){
            ans[idx[i]] = vow[i];
        }
        return ans;
    }
};