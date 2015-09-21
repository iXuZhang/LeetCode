class Solution {
public:
    // every + and - can be flipped base on it's depth in ()
    int calculate(string s) {
        int res = 0;
        int curr = 0;
        int sign = 1; // track '+' and '-'
        stack<int> signs; // track ( ) signs
        signs.push(1);
        s += ')';
        for(char c : s){
            if( c >= '0' && c <= '9')
                curr = curr * 10 + c - '0';
            else if(c == '('){
                signs.push(sign*signs.top());
                sign = 1;
            }
            else if(c == '+' || c == '-' || c == ')'){
                res += sign * signs.top() * curr;
                sign = c == '-' ? -1 : 1;
                if(c == ')') signs.pop();
                curr = 0;
            }
        }
        return res;
    }
};