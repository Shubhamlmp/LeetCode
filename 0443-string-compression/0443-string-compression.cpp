class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0, j = 0;
        while(j < n){
            int c = 0;
            char curr = chars[j];
            while(j < n && chars[j] == curr){
                c++;
                j++;
            }
            chars[i++] = curr;
            if(c > 1){
                string s = to_string(c);
                for(auto x : s){
                    chars[i++] = x;
                }
            }
        }
        return i;
    }
};