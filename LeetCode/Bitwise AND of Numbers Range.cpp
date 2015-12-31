// Bitwise AND of Numbers Range
class Solution {
public:
    /* mask 100000 only 1
    int rangeBitwiseAnd(int m, int n) {
        long res = m; // over flow
        long mask = (m & (-m)); // mask 10000
        while(res + mask <= n){
            if(res == 0) return 0;
            res &= (res + mask);
            mask = (res & (-res));
        }
        return res;
    }
    */
    
    // only look at m and n
    int rangeBitwiseAnd(int m, int n) {
        if(n >= long(m)<< 1) return 0;
        int moveFactor = 1;
        while(m < n){
            m >>= 1;
            n >>= 1;
            moveFactor <<= 1;
        }
        return m*moveFactor;
    }
};