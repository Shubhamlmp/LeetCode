class Solution {
public:
    string invert(string s){
        string res = "";
        for(auto x : s){
            if(x == '0')
                res += '1';
            else
                res += '0';
        }
        return res;
    }
    char findKthBit(int n, int k) {
        string s = "0";
        for(int i = 1; i < n; i++){
            string inverted = invert(s);
            s += '1';
            reverse(inverted.begin(), inverted.end());
            s += inverted;
            if(k < s.size()/2){
                break;
            }
        }
        
        return s[k-1];
    }
};