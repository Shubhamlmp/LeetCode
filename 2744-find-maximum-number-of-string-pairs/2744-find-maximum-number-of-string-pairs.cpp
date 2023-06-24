class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count = 0;
        for(int i = 0; i < words.size(); i++){
            for(int j = i+1; j < words.size(); j++){
                string rStr = words[j];
                reverse(rStr.begin(),rStr.end());
                if(words[i] == rStr){
                    count++;
                }
            }
        }
        return count;
    }
};