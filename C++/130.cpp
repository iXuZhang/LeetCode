class Solution {
public:
    void solve(vector<vector<char>>& board) {
        if(board.empty()) return;
        for(int k = 0; k < board[0].size(); k++){
            BFS(board, 0, k);
            BFS(board, board.size()-1, k);
        }
        for(int k = 0; k < board.size(); k++){
            BFS(board, k, 0);
            BFS(board, k, board[0].size()-1);
        }
        for(int i = 0; i < board.size(); i++)
            for(int j = 0; j < board[0].size(); j++){
                if(board[i][j] == 'O') board[i][j] = 'X';
                if(board[i][j] == '#') board[i][j] = 'O';
            }
    }

private:
    // There is some bug in DFS
    void DFS(vector<vector<char>>& board, int i, int j){
        if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != 'O') return;
        board[i][j] = '#';
        DFS(board, i+1, j);
        DFS(board, i, j+1);
        DFS(board, i-1, j);
        DFS(board, i, j-1);
    }
    // BFS is OK
    void BFS(vector<vector<char>> &board, int i, int j){
        queue<pair<int, int> > q;
        q.push(make_pair(i, j));
        while (!q.empty()) {
            pair<int, int> elem = q.front();
            q.pop();
            i = elem.first;
            j = elem.second;
            if (i >= 0 && i < board.size() && j >=0 && j < board[0].size() && board[i][j] == 'O') {
                board[i][j] = '#';
                q.push(make_pair(i - 1, j));
                q.push(make_pair(i + 1, j));
                q.push(make_pair(i, j - 1));
                q.push(make_pair(i, j + 1));
            }
        }
    }
};