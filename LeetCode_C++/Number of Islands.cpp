// Number of Islands
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int res = 0;
        for(int i = 0; i < grid.size(); i++)
            for(int j = 0; j < grid[0].size(); j++)
                if(grid[i][j] == '1'){
                    res += 1;
                    helper(grid, i, j);
                }
        return res;
    }
    
    void helper(vector<vector<char>>& grid, int i, int j){
        if(i == grid.size() || i < 0 || j == grid[0].size() || j < 0 || grid[i][j] != '1') return;
        grid[i][j] = '#';
        helper(grid, i + 1, j);
        helper(grid, i - 1, j);
        helper(grid, i, j + 1);
        helper(grid, i, j - 1);
    }
};