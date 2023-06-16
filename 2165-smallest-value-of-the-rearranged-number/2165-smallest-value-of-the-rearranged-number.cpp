class Solution {
public:
    static bool cmp(char a, char b){
        return a > b; 
    }
    static bool cmp1(char a, char b){
        return a < b; 
    }
    long long smallestNumber(long long num) {
        if(num == 0) return 0;
        string s = "";
        long long ans = 0;
        if(num > 0){
            s = to_string(num);
            sort(s.begin(),s.end(),cmp1);
            string temp1 = "";
            string temp = "";
            for(auto x : s){
                if(x == '0')
                    temp1 += "0";
                else
                    break;
            }
            
            
            if(temp1.size()>0){
                temp += s[temp1.size()];
                temp += temp1;
                for(int i = temp1.size()+1; i < s.size(); i++){
                    temp += s[i];
                }
            }
            else{
                temp = s;
            }
            
            ans = stoll(temp);
        }
        else{
            num *= -1;
            s = to_string(num);
            sort(s.begin(),s.end(),cmp);
            string temp1 = "";
            string temp = "";
            for(auto x : s){
                if(x == '0')
                    temp1 += "0";
                else
                    break;
            }
            if(temp1.size()>0){
                temp += s[temp1.size()];
                temp += temp1;
                for(int i = temp1.size()+1; i < s.size(); i++){
                    temp += s[i];
                }
            }
            else{
                temp = s;
            }
            ans = stoll(temp);
            ans *= -1;
        }
        return ans;
    }
};