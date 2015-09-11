class Solution {
public:
    /* DP for k transactions
    int maxProfit(vector<int> &prices) {
        // res[k, i] = the max profit until prices[i] using at most k transactions. 
        // res[k, i] = max(res[k, i-1], prices[i] - prices[j] + res[k-1, j])    { j in range of [0, i-1] }
        //           = max(res[k, i-1], prices[i] + max(res[k-1, j] - prices[j]))
        if (prices.size() <= 1) return 0;
        int K = 2; // number of max transation allowed
        vector<vector<int>> res(K+1, vector<int>(prices.size(), 0));
        for (int k = 1; k <= K; k++) {
            int tmpMax = res[k-1][0] - prices[0];
            for (int i = 1; i < prices.size(); i++) {
                res[k][i] = max(res[k][i-1], prices[i] + tmpMax);
                tmpMax = max(tmpMax, res[k-1][i] - prices[i]);
            }
        }
        return res.back().back();
    }
    */
    
    // DP Solution 8ms
    int maxProfit(vector<int> &prices) {
        if (prices.size()<= 1) return 0;
        int res = 0, firstMax = 0, diffMax = INT_MIN, priceMin = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if(prices[i-1] < priceMin) priceMin = prices[i-1];
            else firstMax = max(firstMax, prices[i-1] - priceMin);
            diffMax = max(diffMax, firstMax - prices[i-1]);
            res = max(res, prices[i] + diffMax);
        }
        return res;
    }
};