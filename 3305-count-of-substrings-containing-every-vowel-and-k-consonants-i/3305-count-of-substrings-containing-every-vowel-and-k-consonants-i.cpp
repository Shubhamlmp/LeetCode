class Solution {
public:
    int countOfSubstrings(string word, int k) {
        int ans = 0;
        for(int i = 0; i < word.size(); i++){
            string t = "";
            for(int j = i; j < word.size(); j++){
                t += word[j];
                if(t.size() >= 5){
                    ans += eligible(t, k);
                }
            }
        }
        return ans;
    }
    
    int eligible(string s, int k){
        int a = 0, e = 0, i = 0, o = 0, u = 0;
        int xyz = 0;
        for(auto x : s){
            if(x == 'a'){
                a++;
            } else if(x == 'e') {
                e++;
            } else if(x == 'i') {
                i++;
            } else if(x == 'o') {
                o++;
            } else if(x == 'u') {
                u++;
            } else {
                xyz++;
            }
        }
        if(a > 0 && e > 0 && i > 0 && o > 0 && u >> 0 && xyz == k){
            return 1;
        }
        return 0;
    }
};



