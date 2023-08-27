class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int count_L = 0, count_ = 0;
        for(auto x : moves){
            if(x == 'L'){
                count_L++;
            }
            if(x == '_'){
                count_++;
            }
        }
        int count_R = moves.size()- count_L - count_;
        return max(count_R,count_L)+count_-min(count_R,count_L);
    }
};