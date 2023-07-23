class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string>ans;
        for(int i = 0; i  < words.size(); i++){
            int j = 0;
            string s = words[i];
            string temp = "";
            while(j < s.size()){
                if(s[j] != separator){
                    temp += s[j];
                }
                else if(s[j] == separator && temp.size()>0){
                    ans.push_back(temp);
                    temp.clear();
                }
                j++;
            }
            if(temp.size()>0) ans.push_back(temp);
        }
        return ans;
    }
};