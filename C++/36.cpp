class Solution {
public:
    // Version 1
    bool isValidSudoku(vector<vector<char>>& board) {
        //vector<vector<bool>> row(9,vector<bool>(9,false));    // vector 24ms
        //vector<vector<bool>> column(9,vector<bool>(9,false));
        //vector<vector<bool>> square(9,vector<bool>(9,false));
        int row[9][9] = {0};                                    // array 12ms,not a good way to initialize
        int column[9][9] = {0};
        int square[9][9] = {0};
        for(auto i = 0;i!= board.size();i++){
            for(auto j =0;j!= board[0].size();j++){
                if(board[i][j]!='.'){
                    int val = board[i][j]-'1';
                    int k = j/3 + i/3*3;
                    if(row[i][val]==1 || column[j][val]==1 || square[k][val]==1) return false;
                    else row[i][val]=column[j][val]=square[k][val]=1;
                }    
            }
        }
        return true;
    }
};