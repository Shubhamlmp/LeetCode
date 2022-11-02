class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>m;
        for(int i = 0; i < s.size(); i++){
            m[s[i]]++;
            
        }
        int cnt = 0;
        for(int i = 0; i < t.size(); i++){
            if(m[t[i]] == 0){
                cnt++;
            }
            else{
                m[t[i]]--;
            }
        }
        return cnt;
    }
};