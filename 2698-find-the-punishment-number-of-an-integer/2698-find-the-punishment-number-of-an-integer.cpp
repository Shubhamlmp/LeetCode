class Solution {
public:
    bool isValid(int n, string s, int sum){
        if(s == "" && sum == n) return true;
        for(int i = 1; i <= s.size(); i++){
            int x = stoi(s.substr(0,i));
            if(isValid(n, s.substr(i), sum + x)) return true;
        }
        return false;
    }
    int punishmentNumber(int n) {
        int ans = 0;
        for(int i = 1; i <= n; i++){
            int sq = i*i;
            string x = to_string(sq);
            if(isValid(i, x, 0)) ans += sq;
        }
        return ans;
    }
};