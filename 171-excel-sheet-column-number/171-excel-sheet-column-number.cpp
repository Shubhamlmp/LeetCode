class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = 0;
        for(auto i : columnTitle){
            int d = i - 'A' + 1;
            res = res * 26 + d;
        }
        return res;
    }
};