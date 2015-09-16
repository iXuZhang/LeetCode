class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> table;
        for(string s : tokens){
            if(s != "+" && s != "-" && s != "*" && s != "/") table.push(stoi(s));
            else{
                int right = table.top();
                table.pop();
                int left = table.top();
                table.pop();
                if(s == "+") table.push(left + right);
                else if(s == "-") table.push(left - right);
                else if(s == "*") table.push(left * right);
                else table.push(left/right);
            }
        }
        return table.top();
    }
};