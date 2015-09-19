class Solution {
public:
//P[i][j] = the maximal size of the square that can be achieved at point (i, j)
//P[0][j] = matrix[0][j] (topmost row);
//P[i][0] = matrix[i][0] (leftmost column);
//For i > 0 and j > 0:
//if matrix[i][j] = 0, P[i][j] = 0;
//if matrix[i][j] = 1, P[i][j] = min(P[i - 1][j], P[i][j - 1], P[i - 1][j - 1]) + 1; !!!!
    int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.empty()) return 0;
        int maxsize = 0;
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> size(m + 1, vector<int>(n + 1, 0));// add a row and column
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(matrix[i][j] == '1'){
                   size[i+1][j+1] = min(size[i][j], min(size[i][j+1],size[i+1][j])) + 1;
                   maxsize = max(maxsize, size[i+1][j+1]);
                } 
        return maxsize*maxsize;
    }
};