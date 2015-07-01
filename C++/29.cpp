class Solution {
public:
    /* Version 1 math 16ms
    int divide(int dividend, int divisor) {
        if(divisor==0) return INT_MAX;
        bool neg = (dividend>0)^(divisor>0);
        long long res = exp(log(fabs(dividend))-log(fabs(divisor))); // fabs() to make them float
        if(neg)res=-res;
        if(res > INT_MAX) res= INT_MAX;
        return res;
    }
    */
    
    // Version 2 bit manipulation
    int divide(int dividend, int divisor) {
        if(!divisor || (dividend == INT_MIN && divisor == -1))
            return INT_MAX;
        bool neg = (dividend>0)^(divisor>0);
        long long divid = labs(dividend);
        long long divir = labs(divisor);
        long long res = 0;
        while(divid >= divir){
            long long temp = divir;
            long long reminder = 1;
            while(divid >= (temp<<1)){
                reminder <<= 1;
                temp <<= 1;
            }
            res += reminder;
            divid -= temp;
        }
        return neg? -res:res;
    }
};