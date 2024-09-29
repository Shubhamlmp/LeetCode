class Solution {
public:
    int countOfSubstrings(string word, int k) {
        int ans = 0;
        for(int i = 0; i < word.size(); i++){
            string t = "";
            int a = 0, e = 0, iNum = 0, o = 0, u = 0;
            int xyz = 0;
            for(int j = i; j < word.size(); j++){
                t += word[j];
                if(word[j] == 'a'){
                    a++;
                } else if(word[j] == 'e') {
                    e++;
                } else if(word[j] == 'i') {
                    iNum++;
                } else if(word[j] == 'o') {
                    o++;
                } else if(word[j] == 'u') {
                    u++;
                } else {
                    xyz++;
                }
                
                if(a > 0 && e > 0 && iNum > 0 && o > 0 && u >> 0 && xyz == k){
                    ans++;
                }
            }
        }
        return ans;
    }
};



