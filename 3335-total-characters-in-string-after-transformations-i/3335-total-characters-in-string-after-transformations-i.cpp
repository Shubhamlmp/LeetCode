class Solution {
    const int MOD = 1'000'000'007;
public:
    int lengthAfterTransformations(string s, int t) {
        vector<int> queue(26, 0);

        for (char ch : s) {
            queue[ch - 'a']++;  }

        for (int i = 0; i < t; ++i) {
            queue[0] += queue[25];
            queue[0] %= MOD;
            int last = queue.back();
            queue.pop_back();
            queue.insert(queue.begin(), last);}
        
        int sum = 0;
        
        for (int count : queue) {
            sum = (sum + count) % MOD; }
        
        return sum;   
    }
};