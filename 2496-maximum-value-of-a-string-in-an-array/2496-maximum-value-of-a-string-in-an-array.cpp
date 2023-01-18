class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int mx = INT_MIN;
        for(auto x : strs){
            int n = x.size();
            bool isInt = false, isStr = false;
            int tmp = 0;
            for(int i = 0; i < x.size(); i++){
                if(x[i] >= 97 && x[i] <= 122){
                    isStr = true;
                    if(isInt) break;
                }
                else {
                    isInt = true;
                    tmp = (tmp*10) + (x[i]-'0');
                    if(isStr) break;
                }
            }
            if(isStr && isInt){
                mx = max(mx,n);
            }
            else if(!isStr && isInt){
                mx = max(mx,tmp);
            }
            else if(isStr && !isInt){
                mx = max(mx,n);
            }
        }
        return mx;
    }
};