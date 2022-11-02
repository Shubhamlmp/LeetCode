class Solution {
public:
    string interpret(string c) {
        string s = "";
        int i = 0;
        while(i < c.size()){
            if(c[i] == 'G'){
                s += "G";
                i++;
            }
            else if(c[i] == '(' && c[i+1] == ')'){
                s += "o";
                i = i+2;
            }
            else if(c[i] == '(' && c[i+1] == 'a' && c[i+2] == 'l'&& c[i+3] == ')'){
                s += "al";
                i = i + 4;
            }
        }
        return s;
    }
};