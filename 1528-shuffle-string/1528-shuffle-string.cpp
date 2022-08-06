class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int , char> m;
        for(int i = 0; i < indices.size(); i++){
            m.insert(pair<int, char> {indices[i], s[i]});
        }
        string ans;
        for(auto it = m.begin(); it != m.end(); it++){
            ans += it->second;
        }
        return ans;
    }
};