class Solution {
public:
    string largestGoodInteger(string num) {
        char ans = 'z';
        for(int i = 1; i < num.size()-1; i++){
            if(num[i] == num[i-1] && num[i] == num[i+1]){
                if(ans == 'z'){
                    ans = num[i];
                }
                if(ans != 'z'){
                    cout << num[i] << " " << ans;
                    if(ans < num[i]){
                        ans = num[i];
                    }
                }
            }
        }
        string s = "";
        if(ans == 'z'){
            return "";
        }
        for(int i = 0; i < 3; i++){
            s += ans;
        }
        return s;
    }
};