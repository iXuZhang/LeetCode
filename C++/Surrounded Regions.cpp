// Surrounded Regions
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        if(board.empty()) return;
        int m = board.size();
        int n = board[0].size();
        for(int i = 0; i < m; i++){
            if(board[i][0] == 'O') helper(board, i, 0);
            if(board[i][n-1] == 'O') helper(board, i, n-1);
        }
        for(int j = 0; j < n; j++){
            if(board[0][j] == 'O') helper(board, 0, j);
            if(board[m-1][j] == 'O') helper(board, m-1, j);
        }
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++){
                if(board[i][j] == 'O') board[i][j] = 'X';
                else if(board[i][j] == 'Y') board[i][j] = 'O';
            }
    }
    
private:
    void helper(vector<vector<char>>& table, int i, int j) {
        if(table[i][j] == 'O'){
            table[i][j] = 'Y';
            if(i>1)
                helper(table,i-1,j);
            if(j>1)
                helper(table,i,j-1);
            if(i+1<table.size())
                helper(table,i+1,j);
            if(j+1<table[0].size())
                helper(table,i,j+1);
        }
    }
};