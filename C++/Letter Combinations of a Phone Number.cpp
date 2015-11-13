// Letter Combinations of a Phone Number
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.empty()) return res;
        vector<string> table = {"", "", "abc", "def", "ghi", "jkl","mno", "pqrs","tuv","wxyz"};
        helper(res, table, digits, "", 0);
        return res;
    }
    
private:
    void helper(vector<string>& res,  vector<string>& table, string& digits, string curr, int pos){
        if(pos == digits.size()){
            res.push_back(curr);
            return;
        } 
        for(int i = 0; i < table[digits[pos]-'0'].size(); i++)
            helper(res, table, digits, curr + table[digits[pos]-'0'][i], pos + 1);
    }
};