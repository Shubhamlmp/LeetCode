class Solution {
public:
    bool isPrime(int num){
        if(num==1) return false;
        if(num==2) return true;
        for(int i = 2; i*i <= num; i++){
            if(num%i == 0){
                 return false;
            }
        }
        return true;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int>v;
        vector<int>ans;
        for(int i = left; i <= right; i++){
            if(isPrime(i)){
                v.push_back(i);
            }
        }
        if(v.size() < 2) {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        int diff = INT_MAX, a, b;
        for(int i = 1; i < v.size(); i++){
            if(v[i] - v[i-1] < diff){
                diff = v[i] - v[i-1];
                a = v[i-1];
                b = v[i];
            }
        }
        
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};