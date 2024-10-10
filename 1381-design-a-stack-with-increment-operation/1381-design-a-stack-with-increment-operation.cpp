class CustomStack {
    vector<int>arr;
    int maxSize;
    int currSize;
public:
    CustomStack(int maxSize) {
        this->maxSize = maxSize;
        currSize = 0;
    }
    
    void push(int x) {
        if(currSize == maxSize) {
            return;
        }
        arr.push_back(x);
        currSize++;
    }
    
    int pop() {
        if(currSize == 0){
            return -1;
        }
        int num = arr.back();
        arr.pop_back();
        currSize--;
        return num;
    }
    
    void increment(int k, int val) {
        k = min(k, currSize);
        for(int i = 0; i < k; i++){
            arr[i] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */