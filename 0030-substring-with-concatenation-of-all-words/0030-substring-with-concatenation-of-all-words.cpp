class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int>ans;
        int n = words.size();
        int m = words[0].size();
        if(s.size() < m*n){
            return ans;
        }
        for(int i = 0; i <= s.size()-n*m; i++){
            unordered_map<string,int>mp;
            for(auto x : words){
                mp[x]++;
            }
            int j;
            for(j = 0; j < n; j++){
                string str = s.substr(i+j*m,m);
                if(mp.count(str) == 0){
                    break;
                }
                else{
                    if(mp[str] != 0){
                        mp[str]--;
                    }
                    else{
                        break;
                    }
                }
            }
            if(j == n){
                ans.push_back(i);
            }
        }
        return ans;
    }
};