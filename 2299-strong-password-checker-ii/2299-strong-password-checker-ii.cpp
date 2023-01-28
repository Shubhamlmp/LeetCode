class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if(password.size() < 8){
            return false;
        }
        bool upper= false, lower= false, digit= false, special = false;
            for(auto x : password){
                if(isupper(x)) upper = true;
                else if(islower(x)) lower = true;
                else if(isdigit(x)) digit = true;
                else special = true; 
            }
        for(int i = 1; i < password.size(); i++){
            if(password[i-1] == password[i]) return false;
        }
        if(upper && lower && digit && special) return true;
        return false;
    }
};