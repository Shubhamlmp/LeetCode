class Solution {
public:
    int partitionString(string s) {
        int i = 0;
        int count = 1;
        unordered_set<char> seen;
        while(i <= s.size()){
            if(seen.find(s[i]) == seen.end()){
                seen.insert(s[i++]);
            }
            else if(seen.find(s[i]) != seen.end()){
                count++;
                seen.clear();
                seen.insert(s[i++]);
            }
        }
        return count;
    }
};