class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        string kstring = to_string(k);
        int kSize = kstring.size();
        int i = num.size()-1;
        int sum = 0, carry = 0; 
        vector<int> ans;
        while(k || i  >= 0){
            if(carry > 0){
                sum += carry;
                carry = 0;
            }
            if(i >= 0) sum += num[i--];
            if(k >= 0) sum += k%10;
            if(sum > 9) carry = sum/10; sum %= 10;
            ans.push_back(sum);
            sum = 0;
            k /= 10;
        }
        if(carry > 0) ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};