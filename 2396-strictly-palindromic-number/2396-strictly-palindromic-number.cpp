class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        vector<int>v;
        int temp,j;
        for(int i = 2; i < n-1; i++){
            temp = n;
            while(temp){
                v.push_back(temp%i);
                temp /= i;
            }
            int x = 0;
            j = v.size();
            while(x < j){
                if(v[x] != v[j-x-1]) return false;
                x++;
            }
            v.clear();
        }
        return true;
    }
};