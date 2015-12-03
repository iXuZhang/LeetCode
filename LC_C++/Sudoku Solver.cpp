// Sudoku Solver
class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> row(9,vector<bool>(9,false)), column(9,vector<bool>(9,false)), square(9,vector<bool>(9,false));
        for(int i = 0; i < 9; i++)
            for(int j = 0; j < 9; j++)
                if(board[i][j] != '.'){
                    int num = board[i][j] - '1';
                    int k = i/3*3 + j/3;
                    row[i][num] = column[j][num] = square[k][num] = true;
                }
        solver(board, row, column, square, 0, 0);
    }
    
    bool solver(vector<vector<char>>& board, vector<vector<bool>>& row, vector<vector<bool>>& column, vector<vector<bool>>& square, int i, int j){
        if(i == 9) return true;
        if(j == 9) return solver(board, row, column, square, i+1, 0);
        if(board[i][j] != '.') return solver(board, row, column, square, i, j+1);
        int k = i/3*3 + j/3;
        for(char c = '1'; c <= '9'; c++){
            int num = c - '1';
            if(row[i][num] || column[j][num] || square[k][num]) continue;
            row[i][num] = column[j][num] = square[k][num] = true;
            board[i][j] = c;
            if(solver(board, row, column, square, i, j+1)) return true;
            row[i][num] = column[j][num] = square[k][num] = false;
        }
        board[i][j] = '.';
        return false;
    }
};