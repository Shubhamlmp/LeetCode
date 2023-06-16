class Solution {
public:
    static bool cmp(string a , string b){
        return a+b > b+a;
    }
    
    string largestNumber(vector<int>& nums) {
        vector<string>s;
        for(auto x : nums){
            s.push_back(to_string(x));
        }
        sort(s.begin(),s.end(), cmp);
        string ans = "";
        for(auto x : s){
            cout << x <<" ";
            ans += x;
        }
        cout << ans << endl;
        return ans[0] == '0'? "0": ans;
    }
};