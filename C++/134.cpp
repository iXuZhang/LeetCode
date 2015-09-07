class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int curr = 0, left = 0, right = gas.size();
        int i = left;
        while(left < right){
            curr += gas[i] - cost[i];
            if(curr >= 0) i = ++left;
            else i = --right;
        }
        return curr >= 0 ? left == gas.size() ? 0 : right : -1;
    }
};