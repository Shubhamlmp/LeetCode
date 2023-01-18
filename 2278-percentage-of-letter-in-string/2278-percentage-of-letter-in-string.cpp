class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count = 0;
        for(auto x : s){
            if(x == letter){
                count++;
            }
        }
        return (count*100)/s.size();
    }
};