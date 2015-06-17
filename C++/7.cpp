class Solution {
public:
/*
    int reverse(int x) {
        long res = 0;
        bool neg = false;
        if(x<0){
            x = -x;
            neg = true;
        }
        while(x){
            res = x%10 + res*10;
            x /= 10;
        }
        if(neg) res = -res;
        if(res > pow(2,31)-1 || res < -pow(2,31)) return 0;
        return res;
    }
*/
 // Version2 Faster
    int reverse(int x) {
        long result = 0;
        while(x != 0)
        {
            result = result*10 + x % 10;
            x /= 10;
        }
        return (result > INT_MAX || result < INT_MIN)? 0 : result;
    }
};