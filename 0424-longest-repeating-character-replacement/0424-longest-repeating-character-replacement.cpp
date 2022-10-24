class Solution {
public:
    int characterReplacement(string s, int k) {
        int start = 0, end = 0;
        int maxRepeat = 0, maxLen = 0;
        
        unordered_map<char,int>mp;
        for(end = 0; end <s.size(); end++){
            mp[s[end]]++;
            maxRepeat = max(maxRepeat, mp[s[end]]);
            if(end-start+1-maxRepeat > k){
                mp[s[start]]--;
                start++;
            }
            maxLen = max(maxLen,end-start+1);
        }
        return maxLen;
    }
};