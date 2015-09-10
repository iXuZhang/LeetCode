class Solution {
public:

/* Math
A natural number is...
... a square if and only if each prime factor occurs to an even power in the number's prime factorization.
... a sum of two squares if and only if each prime factor that's 3 modulo 4 occurs to an even power in the number's prime factorization.
... a sum of three squares if and only if it's not of the form 4a(8b+7) with integers a and b.
... a sum of four squares. Period. No condition. You never need more than four.

*/

    /*DP Solution 436ms
    int numSquares(int n) {
        vector<int> res(n + 1, INT_MAX);
        res[0] = 0;
        for(int i = 0; i < res.size(); i++)
            for(int j = 1; j*j <= i; j++)
                res[i] = min(res[i], res[i-j*j] + 1);
        return res[n];
    }
    */
    
    // DP static  12ms
    int numSquares(int n) {
        static vector<int> res {0};
        while(res.size() < n + 1){
            int curr = INT_MAX;
            int s = res.size(); // not change, can not use a i
            for(int j = 1; j*j <= s; j++)
                curr = min(curr, res[s-j*j] + 1);
            res.push_back(curr);
        }
        return res[n];
    }
};