class Solution {
public:
    // Divide and Conquer = Recursive Solution!!! No backTracking
    // () means the calculate order
    // iteration for the last '+' '-' or '*'operation
    // i = the pos of the last Parentheses(outside), the last operator
    // res = the sum of every last operation combination
    vector<int> diffWaysToCompute(string input) {
        vector<int> res;
        for(int i = 0; i < input.size(); i++){
            char curr = input[i];
            if(curr == '+' || curr == '-' || curr == '*'){
                vector<int> left = diffWaysToCompute(input.substr(0,i));
                vector<int> right = diffWaysToCompute(input.substr(i+1));
                for(int m : left)
                    for(int n : right)
                        if(curr == '+') res.push_back(m + n);
                        else if(curr == '-')res.push_back(m - n);
                        else res.push_back(m * n);
            }
        }
        if(res.empty()) res.push_back(stoi(input));
        return res;
    }
};