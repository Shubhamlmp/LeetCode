class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(auto x : arr){
            mp[x]++;
        }
        priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>> >pq;
        for(auto x : mp){
            pq.push({x.second,x.first});
        }
        while(!pq.empty()){
            int freq = pq.top().first;
            if(freq <= k){
                k -=  freq;
                pq.pop();
            }
            else{
                break;
            }
            
        }
        return pq.size();
    }
};