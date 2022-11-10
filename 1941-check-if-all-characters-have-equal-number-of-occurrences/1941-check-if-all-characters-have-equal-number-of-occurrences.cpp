class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int>m;
        for(char x : s){
            m[x]++;
        }
        vector<int>v;
        for(auto x : m){
            v.push_back(x.second);
        }
        for(int i = 0; i < v.size()-1; i++){
            if(v[i] != v[i+1]){
                return false;
            }
        }
        return true;
    }
};