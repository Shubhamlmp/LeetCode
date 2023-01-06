class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int count  = 0;
        int c = coins;
        for(auto x : costs){
            if(x <= c){
                cout << c - x << " " << c << " " << x << endl;
               c -= x;
                count++;
            }
        }
        return count;
    }
};