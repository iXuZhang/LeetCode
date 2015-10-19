// Paint House II
class Solution {
public:
    // res[i][j] = (res[i-1][j] == min ? 2ndmin(res[i-1][j]) : min(res[i-1][j])) + costs[i][j];
    // track minIndex, minVal, minVal2
    int minCostII(vector<vector<int>>& costs) {
        if(costs.empty()) return 0;
        int minIndex = -1, minVal = 0, minVal2 = 0;
        const int n = costs.size();
        const int k = costs[0].size();
        for(int i = 0; i < n; i++){
            int temp, tempVal = INT_MAX, tempVal2 = INT_MAX;
            for(int j = 0; j < k; j++){
                if(j == minIndex) costs[i][j] += minVal2;
                else costs[i][j] += minVal;
                if(costs[i][j] < tempVal){
                    tempVal2 = tempVal;
                    tempVal = costs[i][j];
                    temp = j;
                }
                else if(costs[i][j] < tempVal2)
                    tempVal2 = costs[i][j];
            }
            minIndex = temp;
            minVal = tempVal;
            minVal2 = tempVal2;
        }
        return minVal;
    }
};