class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int cntFlip = 0, cntOne = 0;
        for(auto x : s){
            if(x == '1'){
                cntOne++;
            }
            else{
                cntFlip++;
                cntFlip = min(cntFlip, cntOne);
            }
            
        }
        return cntFlip;
    }
};