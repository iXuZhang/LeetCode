class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid[0][0]) return 0;
        for(int i=0;i<obstacleGrid.size();i++)
            for(int j=0;j<obstacleGrid[0].size();j++)
                if(!i&&!j) obstacleGrid[i][j] = 1;
                else if(!obstacleGrid[i][j]) obstacleGrid[i][j] = (i>0?obstacleGrid[i-1][j]:0) + (j>0?obstacleGrid[i][j-1]:0);
                else obstacleGrid[i][j] = 0;
        return obstacleGrid.back().back();
    }
};