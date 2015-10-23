// Valid Sudoku
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> row(9, vector<bool>(9, false));
        vector<vector<bool>> column(9, vector<bool>(9, false));
        vector<vector<bool>> square(9, vector<bool>(9, false));
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.') continue;
                int num = board[i][j]-'1'; // save time;
                int k = i/3*3 + j/3;
                if(row[i][num] == true || column[j][num] == true || square[k][num] == true)
                return false;
                row[i][num] = column[j][num] = square[k][num] = true;
            }
        }
        return true;    
    }
};