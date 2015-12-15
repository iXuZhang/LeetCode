// Gas Station
class Solution {
public:
    // right + 1 is the begin point
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum = 0, left = 0, right = gas.size() - 1;
        while(left <= right){ // promise sum every element
            if(sum + gas[left] - cost[left] >= 0){
                sum += gas[left] - cost[left];
                left++;
            }
            else{
                sum += gas[right] - cost[right];
                right--;
            }
        }
        if(sum < 0) return -1;
        return right + 1 == gas.size() ? 0 : right + 1;
    }
};