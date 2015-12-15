// Expression Add Operators
class Solution {
public:
    vector<string> addOperators(string num, int target) {
        vector<string> res;
        helper(num, target, res, "", 0, 0, 1);
        return res;
    }
    
private:    
    void helper(string& num, int target, vector<string>& res, string s, int pos, long curr, long last){
        if(pos == num.size() && target == curr + last) res.push_back(s);
        for(int i = pos; i < num.size(); i++){
            if(num[pos] == '0' && i != pos) break;
            string temp = num.substr(pos, i - pos + 1);
            long val = stol(temp);
            if(pos == 0) helper(num, target, res, temp, i + 1, 0, val);
            else{
                helper(num, target, res, s + "+" + temp, i + 1, curr + last, val);
                helper(num, target, res, s + "-" + temp, i + 1, curr + last, -val);
                helper(num, target, res, s + "*" + temp, i + 1, curr, last*val);
            }
        }
    }
};