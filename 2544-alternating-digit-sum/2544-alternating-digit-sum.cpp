#include <string>
class Solution {
public:
    int alternateDigitSum(int n) {
        string s = to_string(n);
        int sum = 0;
        for(int i = 0; i < s.size(); i++){
            stringstream ss;
            ss << s[i];
            int num;
            ss >> num;
            if(i%2 == 0){
                sum += num;
                cout << num << " ";
            }
            else{
                sum -= num;
            }
        }
        return sum;
    }
};