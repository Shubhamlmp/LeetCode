class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        if(s == string(s.rbegin(), s.rend())) return true;
        return false;
    }
};