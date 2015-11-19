// Valid Parentheses
class Solution {
public:
    bool isValid(string s) {
        stack<char> table;
        for(char c : s){
            if(c == '(' || c == '[' || c == '{')
                table.push(c);
            else if(c == ')' && (table.empty() || table.top() != '(')) return false;
            else if(c == ']' && (table.empty() || table.top() != '[')) return false;
            else if(c == '}' && (table.empty() || table.top() != '{')) return false;
            else table.pop();
        }
        return table.empty();
    }
};