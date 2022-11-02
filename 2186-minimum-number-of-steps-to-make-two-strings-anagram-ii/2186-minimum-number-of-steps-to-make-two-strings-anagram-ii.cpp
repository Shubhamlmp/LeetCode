class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>m;
        for(int i = 0; i < s.size(); i++){
            m[s[i]]++;
        }
        for(int i = 0; i < t.size(); i++){
            m[t[i]]--;
        }
        int cnt = 0;
        for(auto x : m){
            cnt += abs(x.second);
        }
        return cnt;
    }
};