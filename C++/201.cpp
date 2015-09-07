class Solution {
public:
    /* Iterative Solution
    int rangeBitwiseAnd(int m, int n){
        int tail = 1;
        while(m != n){
           m >>= 1;
           n >>= 1;
           tail <<= 1;
        }
        return m*tail;
    }
    */
    
    // Version 2 Awesome!!!
    int rangeBitwiseAnd(int m, int n){
        return m == n ? m : (rangeBitwiseAnd(m>>1, n>>1))<<1;
    }
};