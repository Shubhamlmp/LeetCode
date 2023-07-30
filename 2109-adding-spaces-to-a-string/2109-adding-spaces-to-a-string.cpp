class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        unordered_map<int,int>m;
        for(auto x : spaces){
            m[x-1]++;
        }
        string ans = "";
        for(int i = 0; i < s.size(); i++){
            if(m.count(i-1) > 0){
                ans += " ";
                ans += s[i];
            }
            else{
                ans += s[i];
            }
        }
        return ans;
    }
};