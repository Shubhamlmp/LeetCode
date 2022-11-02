class Solution {
public:
    string interpret(string c) {
        string s = "";
        for(int i = 0; i < c.size(); i++){
            if(c[i] == 'G'){
                s += "G";
            }
            else if(c[i] == '(' && c[i+1] == ')'){
                s += "o";
            }
            else if(c[i] == '(' && c[i+1] == 'a' && c[i+2] == 'l'&& c[i+3] == ')'){
                s += "al";
            }
        }
        return s;
    }
};