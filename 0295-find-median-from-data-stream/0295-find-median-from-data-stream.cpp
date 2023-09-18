class MedianFinder {
public:
    priority_queue<int> increasing;
    priority_queue<int, vector<int>, greater<int>> decreasing;
    MedianFinder() {}
    
    void addNum(int num) {
        if(increasing.empty() || increasing.top() > num){
            increasing.push(num);
        }
        else{
            decreasing.push(num);
        }
        
        if(increasing.size() > decreasing.size()+1){
            decreasing.push(increasing.top());
            increasing.pop();
        }
        else if(decreasing.size() > increasing.size()+1){
            increasing.push(decreasing.top());
            decreasing.pop();
        }
    }
    
    double findMedian() {
        if(increasing.size() == decreasing.size()){
				// if (increasing.empty()) {
				// return 0;
				// }
				// else {
				return (increasing.top() + decreasing.top())/2.0;
			// }
            
        }
        
        return increasing.size()> decreasing.size() ? increasing.top(): decreasing.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */