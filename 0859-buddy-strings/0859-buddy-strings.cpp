class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size() != goal.size()){
            return false;
        }
        if(s == goal){
            unordered_map<char,int>s1;
            for(auto x : s){
                s1[x]++;
                if(s1[x] > 1){
                    return true;
                }
            }
            return false;
        }
        vector<int>diff;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != goal[i]){
                diff.push_back(i);
                if(diff.size() > 2){
                    return false;
                }
            }
        }
        if(diff.size() < 2){
            return false;
        }
        if(s[diff[0]] == goal[diff[1]] && s[diff[1]] == goal[diff[0]]){
            return true;
        }
        return false;
    }
};