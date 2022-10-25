class Solution {
public:
    bool areNumbersAscending(string s) {
        int prev = 0;
        string num;
        for(int i = 0; i < s.size(); i++){
            while(isdigit(s[i])){
                num += s[i];
                i++;
            }
            if(num.length() != 0){
                if(stoi(num) > prev){
                    prev = stoi(num);
                }
                else{
                    return false;
                }
                num = "";
            }     
        }
        return true;
    }
};