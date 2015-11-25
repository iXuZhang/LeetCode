// N-Queens
class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> curr(n,string(n,'.'));
        helper(res, curr, 0);
        return res;
    }

private:
    void helper(vector<vector<string>>& res, vector<string>& curr, int i){
        if(i == curr.size()){
            res.push_back(curr);
            return;
        } 
        for(int j = 0; j < curr.size(); j++)
            if(isValid(curr,i,j)){
                curr[i][j] = 'Q';
                helper(res, curr, i+1);
                curr[i][j] = '.';
            }
    }
    
    bool isValid(vector<string>& curr, int i, int j){
        for(int k = i-1; k >= 0; k--)
            if(curr[k][j] == 'Q') return false;
        for(int m = i-1, n = j-1; m >= 0 && n >= 0; m--, n--)
            if(curr[m][n] == 'Q') return false;
        for(int m = i-1, n = j+1; m >= 0 && n < curr.size(); m--, n++)
            if(curr[m][n] == 'Q') return false;
        return true;
    }
};