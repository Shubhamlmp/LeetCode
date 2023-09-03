class Solution {
public:
    int minimumOperations(string num) {
        int n = num.size();
        int ans = n;
        for(int j = n-1; j >= 0; j--){
            if(num[j] == '0'){
                for(int i = j-1; i >= 0; i--){
                    if(num[i] == '0' || num[i] == '5'){
                        ans = min(ans, j-1-i + n-j-1);
                    }
                    ans = min(ans, n-1);
                }
            }
            if(num[j] == '5'){
                for(int i = j-1; i >= 0; i--){
                    if(num[i] == '2' || num[i] == '7'){
                        ans = min(ans, j-1-i + n-j-1);
                    }
                }
            }
        }
        return ans;
    }
};