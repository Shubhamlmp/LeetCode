class FreqStack {
        priority_queue<pair<int, pair<int,int>>>q;
        unordered_map<int,int>freq;
        int pos = 0;
public:
    FreqStack() {
    }
    
    void push(int val) {
        q.emplace(++freq[val], make_pair(++pos, val));
    }
    
    int pop() {
        auto v = q.top();
        q.pop();
        int x = v.second.second;
        freq[x]--;
        return x;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */