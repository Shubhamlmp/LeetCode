class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = cost.size(), total_cost = 0, total_fuel = 0;
        for(int i = 0; i < n; i++){
            total_cost += cost[i];
            total_fuel += gas[i];
        }
        if(total_fuel < total_cost){
            return -1;
        }
        
        int current_fuel = 0, start = 0;
        for(int i = 0; i < n; i++){
            if(current_fuel < 0){
                current_fuel = 0;
                start = i;
            }
            current_fuel += (gas[i]-cost[i]);
        }
        return start;
    }
};