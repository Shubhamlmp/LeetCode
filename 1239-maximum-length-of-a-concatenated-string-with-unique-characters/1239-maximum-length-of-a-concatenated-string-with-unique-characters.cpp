class Solution {
    int maxLenght = 0;
public:
    int maxLength(vector<string>& arr) {
        backtrack(arr, 0, "");
        return maxLenght;
    }
    void backtrack(vector<string>& arr, int idx, string s){
        if(maxLenght < s.size()){
            maxLenght = s.size();
        }
        for(int i = idx; i < arr.size(); i++){
            if(!isValid(s,arr[i])){
                continue;
            }
            backtrack(arr, i+1, s+arr[i]);
        }
    }
    bool isValid(string &s, string &newString){
        unordered_set<char>cSet;
        for(auto ch : newString){
            if(cSet.count(ch) > 0) return false;
            cSet.insert(ch);
            if(s.find(ch) != string::npos) return false;
        }
        return true;
    }
};