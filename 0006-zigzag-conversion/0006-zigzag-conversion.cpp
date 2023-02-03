class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> str(numRows);
        if(numRows == 1){
            return s;
        }
        bool flag = false;
        int i = 0;
        for(auto x : s){
            str[i] += x;
            if(i == 0 || i == numRows-1){
                flag = !flag;
            }
            if(flag) {
                i+=1;
            }
            else {
                i-=1;
            }
        }
        string ans = "";
        for(auto x : str){
            ans+=x;
        }
        return ans;
    }
};