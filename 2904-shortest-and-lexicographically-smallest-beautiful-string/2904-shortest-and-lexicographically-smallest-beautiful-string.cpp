class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        unordered_map<string, int>mp;
        for(int i = 0; i < s.size(); i++){
            string temp = "";
            int len = 0;
            for(int j = i; j < s.size(); j++){
                if(s[j] == '1'){
                    len++;
                }
                temp += s[j];
                if(len == k){
                    mp[temp] = temp.size();
                    break;
                }
            }
        }
        if(mp.size() == 0){
            return "";
        }
        string ans = "";
        int len = INT_MAX;
        for(auto x : mp){
            if(x.second < len){
                ans = x.first;
                len = x.second;
            }
            else if(x.second == len){
                if(ans > x.first){
                    ans = x.first;
                }
            }
        }
        return ans;
    }
};