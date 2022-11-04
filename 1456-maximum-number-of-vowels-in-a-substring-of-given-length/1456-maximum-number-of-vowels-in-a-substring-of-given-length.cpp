class Solution {
public:
    bool isVowel(char c){
        return (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u');
    }
    int maxVowels(string s, int k) {
        int i, maxCount = INT_MIN, count = 0;
        for(i = 0; i < k; i++){
            if(isVowel(s[i])) count++;
        }
        
        for(; i < s.size(); i++){
            if(count > maxCount) maxCount = count;
            if(isVowel(s[i])) count++;
            if(isVowel(s[i-k])) count--;
        }
        if(count > maxCount) maxCount = count;
        return maxCount;
    }
};