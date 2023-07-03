class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<int>pq;
        for(auto x : score){
            pq.push(x);
        }
        int i = 0;
        vector<string>s(3);
        vector<string>ans(score.size());
        
        s[0] = "Gold Medal";
        s[1] = "Silver Medal";
        s[2] = "Bronze Medal";

        while(!pq.empty()){
            auto it = find(score.begin(), score.end(), pq.top());
            int ind = it-score.begin();
            if(i <= 2){
                ans[ind] = s[i];
            }
            else{
                ans[ind] = to_string(i+1);
            }
            i++;
            pq.pop();
        }
        return ans;
    }
};