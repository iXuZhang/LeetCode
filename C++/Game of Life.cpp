// Game of Life
class Solution {
public:
    // two bit
    void gameOfLife(vector<vector<int>>& board) {
        if(board.empty()) return;
        const int m = board.size();
        const int n = board[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                int c = count(board, i, j);
                if(board[i][j] == 1 && (c == 2 || c == 3) || (board[i][j] == 0 && c == 3))
                    board[i][j] |= 2;
            }
        }
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                board[i][j] >>= 1;
    }
    
    int count(vector<vector<int>>& board, int pos1, int pos2){
        int res = 0;
        int m = board.size();
        int n = board[0].size();
        for(int i = max(pos1 - 1, 0); i <= min(pos1 + 1, m - 1); i++)
            for(int j = max(pos2 - 1, 0); j <= min(pos2 + 1, n - 1); j++)
                res += (board[i][j]&1);
        return res - (board[pos1][pos2]&1);
    }
};