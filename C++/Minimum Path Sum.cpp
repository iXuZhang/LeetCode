// Minimum Path Sum
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        for(int i = 0; i < grid.size(); i++)
            for(int j = 0; j < grid[0].size(); j++)
                if(i == 0 && j == 0) continue;
                else grid[i][j] = min((i-1 >= 0 ? grid[i-1][j] : INT_MAX), (j- 1 >= 0 ? grid[i][j-1] : INT_MAX )) + grid[i][j];
        return grid.back().back();
    }
};