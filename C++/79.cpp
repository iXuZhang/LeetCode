class Solution {
public:
    // 20ms return bool backtracking
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        n = board[0].size();
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(backTracking(board,word,i,j,0)) return true;// save time
        return false;
    }
    
private:    
    // bool not void
    int m,n;//save 4ms
    bool backTracking(vector<vector<char>>& board, string& word, int i, int j, int k){
        if(k == word.size()) return true;
        if(i==m||i<0||j==n||j<0||board[i][j]!=word[k]) return false;
        char temp = board[i][j];
        board[i][j] = ' ';
        if(backTracking(board,word,i+1,j,k+1)||backTracking(board,word,i-1,j,k+1)||backTracking(board,word,i,j+1,k+1)||backTracking(board,word,i,j-1,k+1))  return true;
        board[i][j] = temp;
        return false;
    }
};