class Solution {
public:
    string compressedString(string word) {
        char lastChar = word[0];
        int count = 1;
        string s = "";
        for(int i = 1; i < word.size(); i++){
            if(lastChar == word[i]) {
                if(count < 9){
                    count++;
                }
                else {
                    s += "9";
                    s.push_back(lastChar);
                    count = 1;
                }
            } else{
                s += to_string(count);
                s.push_back(lastChar);
                lastChar = word[i];
                count = 1;
            }
        }
        s += to_string(count);
        s.push_back(lastChar);
        return s;
    }
};