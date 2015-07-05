class Solution {
public:
    /* Version 1  slow 20ms
    double myPow(double x, int n) {
        if(x==1||x==-1&&!(n%2)) return 1;
        if(x==-1&&n%2) return -1;
        double res = 1;
        if(n<0){
            x=1/x;
            n=-n;
        }
        while(n>0){
            res *= x;
            n--;
            if(!res) return 0;
        }
        return res;
    }
    */
    
    //Version 2 Binary Search Awesome!! 4ms
    double myPow(double x, int n) {
        if(n==0) return 1;
        double temp = myPow(x, n/2);
        if(n%2) return n>0 ? x*temp*temp:1/x*temp*temp;
        else return temp*temp;
    }
};