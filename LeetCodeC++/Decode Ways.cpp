// Decode Ways
class Solution {
public:
    // 0, 105, 100, 110, (prev, res, curr)
    int numDecodings(string s) {
        const int n = s.size();
        if(n == 0 || s[0] == '0') return 0;
        int prev = 1, res = 1;
        for(int i = 1; i < n; i++){
            int temp = res;
            if(s[i] == '0' && s[i-1] != '1' && s[i-1] != '2') return 0; // 70, 100
            else if(s[i] == '0') res = prev; // 10, 20
            else if(s[i-1] == '1' || s[i-1] == '2' && s[i] <= '6') res += prev;
            prev = temp;
        }
        return res;
    }
};