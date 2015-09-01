class Solution {
public:
    // record min & res;
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        int res = 0;
        int min = prices.front();
        for(int n : prices){
            if(n > min && n - min > res) res = n - min; 
            if(n < min) min = n;
        }
        return res;
    }
};