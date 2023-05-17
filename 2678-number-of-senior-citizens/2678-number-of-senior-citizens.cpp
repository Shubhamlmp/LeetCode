class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(auto x : details){
            string s = "";
            s += x[11];
            s += x[12];
            int data;
            stringstream st;
            st << s;
            st >> data;
            if(data > 60){
                count++;
            }
        }
        return count;
    }
};