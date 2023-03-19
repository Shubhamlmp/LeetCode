class Solution {
public:
    vector<int> evenOddBit(int n) {
        string s = "";
        while(n){
            s += to_string(n%2);
            n /= 2;
        }
        int even = 0, odd = 0;
        for(int i = 0; i < s.size(); i++){
            if(i%2 == 0 && s[i] == '1'){
                even++;
            }
            else if(i%2 != 0 && s[i] == '1'){
                odd++;
            }
        }
        return {even,odd};
    }
};