class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int num = 0;
        for(int i = 0; i<grid.size(); i++)
            for(int j = 0; j<grid[0].size(); j++)
                if(grid[i][j] == '1') DFS(grid, i, j, num++);
        return num;
    }
    
private:
    void DFS(vector<vector<char>>& grid, int i, int j, int num){
        if(i == grid.size() || i < 0 || j == grid[0].size() || j < 0 || grid[i][j] != '1') return;
        grid[i][j] = 'a' + num;
        DFS(grid, i+1, j, num);
        DFS(grid, i, j+1, num);
        DFS(grid, i-1, j, num);
        DFS(grid, i, j-1, num);
    }
};