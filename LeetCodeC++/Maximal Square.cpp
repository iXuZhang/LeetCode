// Maximal Square
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int res = 0;
        const int m = matrix.size();
        if(m == 0) return res;
        const int n = matrix[0].size();
        vector<vector<int>> table(m, vector<int>(n, 0));
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(matrix[i][j] == '1'){
                    table[i][j] = 1 + (i > 0 && j > 0 ? min(min(table[i-1][j] , table[i][j-1]), table[i-1][j-1]) : 0);
                    res = max(res, table[i][j]);
                }
        return res*res;
    }
};