class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int>m;
        for(int i = 0; i < num.size(); i++){
            int x = num[i]-'0';
            m[x]++;
        }
        
        for(int i = 0; i < num.size(); i++){
            int x = num[i]-'0';
            if(m[i] != x){
                return false;
            }
        }
        return true;
    }
};