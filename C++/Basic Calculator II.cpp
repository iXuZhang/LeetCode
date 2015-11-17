// Basic Calculator II
class Solution {
public:
    int calculate(string s) {
        int res = 0, sign = 0, curr = 0, prev;
        s += "+";
        for(char c : s){
            if(c == ' ') continue;
            if(c == '+' || c == '-'){
                if(sign == 0) res += curr;
                else if(sign == 1) res -= curr;
                else if(sign == 2) res += prev*curr;
                else res += prev/curr;
                curr = 0;
                sign = c == '+' ? 0 : 1;
            }
            else if(c == '*' || c == '/'){
                if(sign == 0) prev = curr;
                else if(sign == 1) prev = -curr;
                else if(sign == 2) prev *= curr;
                else prev /= curr;
                curr = 0;
                sign = c == '*' ? 2 : 3;
            }
            else curr = curr*10 + c - '0';
        }
        return res;
    }
};