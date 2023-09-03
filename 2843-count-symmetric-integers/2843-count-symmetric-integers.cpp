class Solution {
public:
    bool compare(int num){
        string s = to_string(num);
        int n = s.size();
        int sum1 = 0;
        for(int i = 0; i < n/2; i++){
            sum1 += int(s[i]);
        }
        int sum2 = 0;
        for(int i = n/2; i < n; i++){
            sum2 += int(s[i]);
        }
        return sum1 == sum2;
    }
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for(int i = low; i <= high; i++){
            if(compare(i)) count++;
        }
        return count;
    }
};