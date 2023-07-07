class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);        
        int i = 0, j = 0;
        int count = 0;
        while(i < s.size()){
            string a = s.substr(i, k);
            cout << a << " ";
            if(a.size() == k){
                int n = stoi(a);
                if(n != 0 && num%n == 0){
                    count++;
                }
            }
            i++;
        }
        return count;
    }
};