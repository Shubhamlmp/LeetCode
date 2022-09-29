class Solution {
public:
    int maxDepth(string s) {
        int maxD = 0, count = 0;
        for(int i = 0; i <s.size(); i++){
            if(s[i] == '('){
                count++;
            }
            else if(s[i] == ')'){
                count--;
            }
            maxD = max(maxD, count);
        }
        return maxD;
    }
};