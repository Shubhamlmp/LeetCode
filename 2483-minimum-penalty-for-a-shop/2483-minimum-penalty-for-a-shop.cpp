class Solution {
public:
    int bestClosingTime(string customers) {
        int score = 0, max_score = 0, max_hour = -1;
        for(int i = 0; i < customers.size(); i++){
            score += (customers[i] == 'Y') ? 1 : -1;
            if(score > max_score) {
                max_score = score;
                max_hour = i;
            }
        }
        return max_hour + 1;
    }
};