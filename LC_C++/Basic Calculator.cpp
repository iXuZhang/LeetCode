// Basic Calculator
class Solution {
public:
    int calculate(string s) {
        stack<int> table;
        table.push(1);
        s += '+';
        int curr = 0;
        int res = 0;
        int sign = 1;
        for(int i = 0; i != s.size(); i++){
            if(isdigit(s[i])) curr = curr*10 + s[i] - '0';
            else if(s[i] == '+' || s[i] == '-' || s[i] == ')'){ // 1 - (5)
                res += table.top()*sign*curr;
                curr = 0;
                sign = s[i] == '+' ? 1 : -1;
                if(s[i] == ')') table.pop();
            }
            else if(s[i] == '('){
                table.push(sign*table.top());
                sign = 1;
            }
        }
        return res;
    }
};