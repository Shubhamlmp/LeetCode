class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        sort(s.begin(),s.end());
        int count = 0;
        for(auto x : s){
            if(x == '1') count++;
        }
        if(count <= 1) return s;
        int idx = -1;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                idx = i;
                break;
            }
        }
        swap(s[0],s[idx]);
        reverse(s.begin(),s.end());
        return s;
    }
};