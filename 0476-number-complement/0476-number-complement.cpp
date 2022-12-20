class Solution {
public:
    int findComplement(int num) {
    string s = "";
    while(num){
        s += to_string(num%2);
        num = num/2;

    }
    reverse(s.begin(),s.end());
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            s[i] = '0';
        }
        else{
            s[i] = '1';
        }
    }
    return stoi(s,0,2);
    }
};