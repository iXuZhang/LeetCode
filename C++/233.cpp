class Solution {
public:
    int countDigitOne(int n) {
        int res = 0;
        for (long i = 1; i <= n; i *= 10)
            if(n/i%10 > 1) res += (n/i/10 + 1)*i;// digit > 1
            else if(n/i%10 == 1)  res += n/i/10*i + n%i + 1; // digit == 1
            else res += n/i/10*i; // digit == 0
        return res;
    }
};