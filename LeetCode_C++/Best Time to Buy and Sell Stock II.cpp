// Best Time to Buy and Sell Stock II
class Solution {
public:
    // Greedy
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int prev = INT_MAX;
        for(int price : prices){
            if(price > prev) res += price - prev;
            prev = price;
        }
        return res;
    }
};