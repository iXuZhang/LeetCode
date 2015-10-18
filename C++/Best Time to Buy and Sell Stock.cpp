// Best Time to Buy and Sell Stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int minPrice = INT_MAX;
        for(int p : prices){
            minPrice = min(minPrice, p);
            res = max(res, p - minPrice);
        }
        return res;
    }
};