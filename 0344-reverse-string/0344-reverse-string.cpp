class Solution {
public:
    void rev(vector<char>& s, int i, int n){
        if(i >= n/2){
            return;
        }
        swap(s[i],s[n-1-i]);
        rev(s,i+1,n);
    }
    void reverseString(vector<char>& s) {
        rev(s, 0, s.size());
    }
};