class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>hash1(26,0);
        vector<int>hash2(26,0);
        int l1 = s1.size();
        int l2 = s2.size();
        if(l1 > l2){
            return false;
        }
        int left = 0, right = 0;
        while(right < l1){
            hash1[s1[right]-'a'] += 1;
            hash2[s2[right]-'a'] += 1;
            right += 1;
        }
        right -= 1;
        while(right < l2){
            if(hash1 == hash2){
                return true;
            }
            right += 1;
            if(right != l2){
                hash2[s2[right]-'a'] += 1;
            }
            hash2[s2[left]-'a'] -= 1;
            left += 1;
        }
        return false;
    }
};