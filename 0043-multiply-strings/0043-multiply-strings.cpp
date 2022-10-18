class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0") return "0";
        
        vector<int> res(num1.size()+num2.size(),0);
        
        for(int i = num1.size()-1; i >= 0; i--){
            for(int j = num2.size()-1; j >= 0; j--){
                //multiplying & storing in vector;
                res[i+j+1] += (num1[i]-'0') * (num2[j]-'0');
                // storing carry in one position before
                res[i+j] += res[i+j+1]/10;
                // strong only reminder part
                res[i+j+1] %= 10;
            }
        }
        
        int i = 0;
        string ans = "";
        while(res[i] == 0){
            i++;
        }
        while(i < res.size()){
            ans.push_back(res[i]+'0');
            i++;
        }
        return ans;
    }
};