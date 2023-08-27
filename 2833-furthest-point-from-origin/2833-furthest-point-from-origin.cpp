class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        unordered_map<char,int>m;
        for(auto x : moves){
            m[x]++;
        }
        int ans = 0;
        if(m.size() == 2){
            if(m.find('R') == m.end()) ans = m['L'] + m['_'];
            if(m.find('L') == m.end()) ans = m['R'] + m['_'];
            if(m.find('_') == m.end()) ans = m['R'] - m['L'];
        }
        else{
            ans = max((m['L'] + m['_'] - m['R']), (m['R'] + m['_'] - m['L']));
        }
        return abs(ans);
    }
};