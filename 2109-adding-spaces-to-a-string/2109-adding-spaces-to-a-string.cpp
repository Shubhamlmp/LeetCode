class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";
        int i = 0, j = 0;
        int n = spaces.size(), m= s.size();
        while(i < m){
            if(j < n && i == spaces[j]){
                ans += " ";
                ans += s[i];
                j++;
            }
            else{
                ans += s[i];
            }
            i++;
        }
        return ans;
    }
};