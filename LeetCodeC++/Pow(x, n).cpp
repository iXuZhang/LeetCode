// Pow(x, n)
class Solution {
public:
    double myPow(double x, int n) {
        if(n < 0){ 
            x = 1/x;
            n = -n;
        }
        else if(n == 0) return 1;
        else if(n == 1) return x;
        double temp = myPow(x, n/2);
        return n%2 ? temp*temp*x : temp*temp;
    }
};