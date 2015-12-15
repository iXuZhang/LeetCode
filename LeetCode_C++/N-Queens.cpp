// N-Queens
class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> curr(n,string(n,'.'));
        bool col[n] = {false}, d1[2*n-1] = {false}, d2[2*n-1] = {false};
        helper(res, curr, col, d1, d2, 0, n);
        return res;
    }

private:
    void helper(vector<vector<string>>& res, vector<string>& curr, bool *col, bool *d1, bool *d2, int i, int& n){
        if(i == n){
            res.push_back(curr);
            return;
        } 
        for(int j = 0; j < curr.size(); j++)
            if(col[j] == false && d1[i-j+n-1] == false && d2[i+j] == false){
                col[j] = d1[i-j+n-1] = d2[i+j] = true;
                curr[i][j] = 'Q';
                helper(res, curr, col, d1, d2, i+1, n);
                curr[i][j] = '.';
                col[j] = d1[i-j+n-1] = d2[i+j] = false;
            }
    }
};