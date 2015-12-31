// N-Queens II
class Solution {
public:
    int totalNQueens(int n) {
        int res = 0;
        bool col[n] = {false}, d1[2*n-1] = {false}, d2[2*n-1] = {false};
        helper(res, col, d1, d2, 0, n);
        return res;
    }

private:
    void helper(int& res,  bool *col, bool *d1, bool *d2, int i, int& n){
        if(i == n){
            res++;
            return;
        } 
        for(int j = 0; j < n; j++)
            if(col[j] == false && d1[i-j+n-1] == false && d2[i+j] == false){
                col[j] = d1[i-j+n-1] = d2[i+j] = true;
                helper(res, col, d1, d2, i+1, n);
                col[j] = d1[i-j+n-1] = d2[i+j] = false;
            }
    }
};