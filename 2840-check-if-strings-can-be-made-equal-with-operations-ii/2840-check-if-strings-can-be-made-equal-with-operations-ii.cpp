class Solution {
public:
    bool checkStrings(string s1, string s2) {
        unordered_map<char,int> m1_e,m1_o;
        unordered_map<char,int> m2_e,m2_o;
        for(int i = 0; i < s1.size(); i++){
            if(i%2 == 0){
                m1_e[s1[i]]++;
                m2_e[s2[i]]++;
            }
            else{
                m1_o[s1[i]]++;
                m2_o[s2[i]]++;
            }
        }
        return m1_e == m2_e && m1_o == m2_o;
    }
};