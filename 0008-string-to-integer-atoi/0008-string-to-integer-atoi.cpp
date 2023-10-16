class Solution {
public:
    int myAtoi(string s) {
        int len = s.size();
        double num = 0;
        int i = 0;
        while(i < len && s[i] == ' '){
            i++;
        }
        bool isPositive = s[i] == '+';
        bool isNegative = s[i] == '-';
        isPositive == true ? ++i : i;
        isNegative == true ? ++i : i;
        
        while(i < len && s[i] >= '0' && s[i] <= '9'){
            num = num*10 + (s[i] - '0');
            i++;
        }
        num = isNegative ? -num : num;
        num = num > INT_MAX ? INT_MAX : num; 
        num = num < INT_MIN ? INT_MIN : num;
        return num;
    }
};