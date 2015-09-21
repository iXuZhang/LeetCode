class Solution {
public:
    int calculate(string s) {
        vector<int> res = {0};
        int sign = 1;
        int curr = 0;
        s += '+';
        for(char c : s){
            if(c <= '9' && c >= '0') curr = curr*10 + c - '0';
            else if(c == '+' || c == '-'){
                if(sign == 2) res.back() *= curr;
                else if(sign == 3) res.back() /= curr;
                else res.back() += curr * sign;
                sign = c == '+' ? 1 : -1;
                curr = 0;
            }
            else if(c == '*' || c == '/'){
                if(sign == 1 || sign == -1) res.push_back(sign*curr);
                if(sign == 2) res.back() *= curr;
                if(sign == 3) res.back() /= curr;
                sign = c == '*' ? 2 : 3;
                curr = 0;
            }
        }
        return accumulate(res.begin(), res.end(), 0);
    }
};