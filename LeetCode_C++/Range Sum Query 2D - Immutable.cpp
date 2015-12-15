// Range Sum Query 2D - Immutable
class NumMatrix {
public:
    NumMatrix(vector<vector<int>> &matrix) {
        if(matrix.empty()) return; // input is empty
        const int m = matrix.size();
        const int n = matrix[0].size();
        table = matrix;
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++){
                table[i][j] += (i>0?table[i-1][j]:0) + (j>0?table[i][j-1]:0) - (i>0&&j>0?table[i-1][j-1]:0);
            }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        return table[row2][col2] - (row1>0?table[row1-1][col2]:0) - (col1>0?table[row2][col1-1]:0) + (row1>0&&col1>0?table[row1-1][col1-1]:0);
    }
    
private:
    vector<vector<int>> table;
};


// Your NumMatrix object will be instantiated and called as such:
// NumMatrix numMatrix(matrix);
// numMatrix.sumRegion(0, 1, 2, 3);
// numMatrix.sumRegion(1, 2, 3, 4);