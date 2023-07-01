class Compare{
public:
    bool operator()(pair<int,int>a, pair<int,int>b){
        return a.second >= b.second;
    }
};

class Solution {
public:

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, Compare>pq;
        int i = 0, a, b;
        for(auto p : points){
            a = p[0], b = p[1];
            pq.push({i++, a*a+b*b});
        }
        
        vector<vector<int>> ans;
        int j = 0;
        while(j < k){
            ans.push_back(points[pq.top().first]);
            pq.pop();
            j++;
        }
        return ans;
    }
};