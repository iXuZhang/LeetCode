// Evaluate Reverse Polish Notation
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> table;
        for(string s : tokens){
            if(s == "+" || s == "-" || s == "*" || s == "/"){
                int num = table.top();
                table.pop();
                if(s == "+") table.top() += num;
                else if(s == "-") table.top() -= num;
                else if(s == "*") table.top() *= num;
                else table.top() /= num;
            }
            else table.push(stoi(s));
        }
        return table.top();
    }
};