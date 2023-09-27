class Solution {
public:
    int secondHighest(string s) {
        set<int>st;
        for(auto ch : s){
            if(isdigit(ch)){
                st.insert(ch-'0');
            }
        }
        if(st.size() < 2) return -1;
        priority_queue<int>pq;
        for(auto num : st){
            pq.push(num);
        }
        pq.pop();
        return pq.top();
    }
};