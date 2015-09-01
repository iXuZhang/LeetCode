class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        int res = 0;
        int prev = prices.front();
        for(int n: prices){
            if(n > prev) res+= n - prev;
            prev = n;
        }
        return res;
    }
};