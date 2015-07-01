class Solution {
public:
/* Version 1 0ms math
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        vector<string> alphabet = {" ","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int length = 1;
        for(int i = 0;i<digits.size();i++) length *= alphabet[digits[i]-'0'].size();
        vector<string> res(length,"");
        int m = length, n = length;
        for(int i = 0;i<digits.size();i++){
            m = n;
            n /= alphabet[digits[i]-'0'].size();
            for(int j = 0,k = 0;j<res.size(); k = ++j%m/n) res[j] += alphabet[digits[i]-'0'][k];
        }
        return res;
    }
*/

// Version 2 Backtracking Awesome!!!!! Lean to use Recursion
    vector<string> letterCombinations(string digits) 
    {
        vector<string> res;
        if(digits.size()==0) return res;
        string local;
        vector<string> table = {" ","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        backtracking(table,res,local,0,digits);
        return res;
    }

    void backtracking(const vector<string>& table, vector<string>& res, string& local, int index, const string& digits) {
        if(index==digits.size())
            res.push_back(local);
        else
            for(int i=0;i<table[digits[index]-'0'].size();i++) {
                local.push_back(table[digits[index]-'0'][i]);
                backtracking(table, res, local, index+1, digits);
                local.pop_back();
            }
    }
    
};