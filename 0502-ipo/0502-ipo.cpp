class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        vector<pair<int, int>> vec(n);
        for(int i = 0; i < capital.size(); i++){
            vec[i] = make_pair(capital[i],profits[i]);
        }
        sort(vec.begin(),vec.end());
        
        priority_queue<int> pq;
        int i = 0;
        while(k--){
            while (i < n && vec[i].first <= w) {
                pq.push(vec[i].second);
                i++;
            }
            if(pq.empty()){
                break;
            }
            w += pq.top();
            pq.pop();
        }

        return w;
    }
};