// Best Time to Buy and Sell Stock with Cooldown
class Solution {
public:
    /*  
        k is the cooldown day
        buy[i] = max(buy[i-1], sell[i-1-k]-prices[i])
        sell[i] = max(sell[i-1], buy[i-1]+prices[i])
    */
    int maxProfit(vector<int>& prices) {
        int buy = INT_MIN, sell = 0, prevsell = 0;
        for(int price : prices){
            int temp = sell;
            int lastbuy = buy;
            buy = max(buy, prevsell- price);
            sell = max(sell, lastbuy + price);
            prevsell = temp;
        }
        return max(buy, sell);
    }
};