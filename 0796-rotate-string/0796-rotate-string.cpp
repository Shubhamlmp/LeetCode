class Solution {
public:
    bool rotateString(string s, string goal) {
        string temp = s;
        if(s == goal){
            return true;
        }
        if(s.size() != goal.size()){
            return false;
        }
        string t1 = "";
        for(int i = 0; i < s.size(); i++){
            t1 += s[i];
            temp = s.substr(i+1) + t1;
            if(temp == goal){
                return true;
            }
        }
        return false;
    }
};