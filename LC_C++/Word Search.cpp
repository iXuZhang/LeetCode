// Word Search
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if(board.empty() || word.empty()) return false;
        m = board.size();
        n = board[0].size();
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(board[i][j] == word[0]){
                    if(helper(board, word, i, j, 0)) return true;
                } 
        return false;
    }
    
private:
    int m;
    int n;
    bool helper(vector<vector<char>>& board, string& word, int i, int j, int pos){
        if(pos == word.size()) return true;
        if(i < 0 || i >= m || j < 0 || j >= n || board[i][j] == '@' || board[i][j] != word[pos]) return false;
        char temp = board[i][j];
        board[i][j] = '@'; 
        if(helper(board, word, i+1, j, pos + 1) || helper(board, word, i-1, j, pos + 1) 
            || helper(board, word, i, j+1, pos + 1) ||  helper(board, word, i, j-1, pos + 1)) 
        return true;
        board[i][j] = temp;
        return false;
    }
};