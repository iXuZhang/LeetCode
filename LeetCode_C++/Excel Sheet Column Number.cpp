// Excel Sheet Column Number
class Solution {
public:
    // period = 26 
    // A= 1
    // AA  = 26*1 + A
    // AAA = 26*26*1 + AA
    int titleToNumber(string s) {
        const int n = s.size();
        int res = 0;
        for(int i = 0; i < n; i++)
            res = res*26 + (s[i] - 'A' + 1);
        return res;
    }
};