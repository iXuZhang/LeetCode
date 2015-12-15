// Different Ways to Add Parentheses
class Solution {
public:
    vector<int> diffWaysToCompute(string input) {
        if(input.empty()) return {};
        const int n = input.size();
        vector<int> res;
        for(int i = 0; i < n; i++){
            int sign = input[i];
            if(sign == '+' || sign == '-' || sign == '*'){
                vector<int> temp1 = diffWaysToCompute(input.substr(0, i));
                vector<int> temp2 = diffWaysToCompute(input.substr(i+1));
                for(int num1 : temp1)
                    for(int num2 : temp2)
                        if(sign == '+') res.push_back(num1 + num2);
                        else if(sign == '-') res.push_back(num1 - num2);
                        else res.push_back(num1 * num2);
            }
        }
        if(res.empty()) return {stoi(input)};
        else return res;
    }
};