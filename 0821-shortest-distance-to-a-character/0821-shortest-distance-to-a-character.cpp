class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>v;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == c){
                v.push_back(i);
            }
        }

        vector<int>v1;
        for(int i = 0; i < s.size(); i++){
            int minD = INT_MAX;
            for(int j = 0; j < v.size(); j++){
                minD = min(minD, abs(i-v[j]));
            }
            v1.push_back(minD);
        }
        return v1;
    }
};