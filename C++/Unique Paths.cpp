// Unique Paths
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> table(m+1, vector<int>(n+1,0));
        table[0][1] = 1;
        for(int i = 1; i < m+1; i++){
            for(int j = 1; j < n+1; j++)
                table[i][j] = table[i-1][j] + table[i][j-1];
        }
        return table[m][n];
    }
};