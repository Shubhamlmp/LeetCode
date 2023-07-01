class SmallestInfiniteSet {
public:
    priority_queue<int, vector<int>, greater<int>>pq;
    unordered_map<int,int>mp;
    int k;
    SmallestInfiniteSet() {
        k = 1;
    }
    
    int popSmallest() {
        if(!pq.empty()){
            int ans = pq.top();
            pq.pop();
            mp.erase(ans);
            return ans;
        }
        int ans = k;
        k++;
        return ans;
    }
    
    void addBack(int num) {
        if(k > num && mp.count(num) == 0){
            pq.push(num);
            mp[num]++;
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */