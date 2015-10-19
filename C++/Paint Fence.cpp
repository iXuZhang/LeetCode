// Paint Fence
class Solution {
public:
    // sameColor differentColor
    // 1    0       k
    // 2    k       k(k-1)  
    // sameColor = pre.differentColor;
    // differentColor = pre.total * (k-1)
    int numWays(int n, int k) {
        if(n < 1 || k < 1) return 0;
        int sameLastTwoColor = 0;
        int diffLastTwoColor = k;
        for(int i = 1; i < n; i++){
            int temp = sameLastTwoColor;
            sameLastTwoColor = diffLastTwoColor;
            diffLastTwoColor = (temp + diffLastTwoColor)*(k-1);
        }
        return sameLastTwoColor + diffLastTwoColor;
    }
};