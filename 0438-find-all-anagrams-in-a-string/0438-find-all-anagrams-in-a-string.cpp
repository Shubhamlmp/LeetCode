class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        vector<int>hash1(26,0);
        vector<int>hash2(26,0);
        int l1 = p.size();
        int l2 = s.size();
        if(l1 > l2){
            return ans;
        }
        int left = 0, right = 0;
        while(right < l1){
            hash1[p[right]-'a'] += 1;
            hash2[s[right]-'a'] += 1;
            right += 1;
        }
        right -= 1;
        while(right < l2){
            if(hash1 == hash2){
                ans.push_back(left);
            }
            right += 1;
            if(right != l2){
                hash2[s[right]-'a'] += 1;
            }
            hash2[s[left]-'a'] -= 1;
            left += 1;
        }
        return ans;
    }
};