/*
将一个正整数分成若干个数的和，求这些数的最大乘积
*/


p[n] = max(p[2] * p[n-2], p[3] * p[n-3], p[4] * p[n-4] ..... );

int maxProduct(int n) {
    vector<int> dp(n + 1, 0);
    dp[1] = 1;
    for (int i = 2; i <= n; ++i) {
        for (int j = 1; j <= i / 2; ++j) {
            dp = max(dp, dp[j] * dp[i - j]);
        }
        dp = max(dp, i);
    }
    return dp[n];
}. fr