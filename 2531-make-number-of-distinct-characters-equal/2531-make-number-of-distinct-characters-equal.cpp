class Solution {
public:
    bool isItPossible(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();
        unordered_map<char,int>m1,m2;
        for(auto c : word1){
            m1[c]++;
        }
        for(auto c : word2){
            m2[c]++;
        }
        for(int i = 0; i < 26; i++){
            for(int j = 0; j < 26; j++){
                char x = i + 'a';
                char y = j + 'a';
                if(m1[x] > 0 && m2[y] > 0){
                    m1[x]--; m2[y]--;
                    m2[x]++; m1[y]++;
                    int cnt1 = 0, cnt2 = 0;
                    for(int k = 0; k < 26; k++){
                        cnt1 += m1[k + 'a'] > 0;
                        cnt2 += m2[k + 'a'] > 0;
                    }
                    if(cnt1 == cnt2) return true;
                    m1[x]++; m2[y]++;
                    m2[x]--; m1[y]--;
                }
                
            }
        }
        return false;
    }
};