class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long sum = 0;
        int n = nums.size();
        priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(int i = 0; i < n; i++){
            pq.push({nums[i], i});
        }
        vector<bool>check(n,false);
        while(pq.size()){
            int minn = pq.top().first;
            int pos = pq.top().second;
            if(check[pos] == false){
                sum += minn;
                if(pos+1 < n) {check[pos+1] = true;}
                if(pos-1 >= 0) {check[pos-1] = true;}
            }
            pq.pop();
        }
        return sum;
    }
};