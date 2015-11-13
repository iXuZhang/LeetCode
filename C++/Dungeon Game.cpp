// Dungeon Game
class Solution {
public:
    // dungeon[i][j] hp need
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        const int m = dungeon.size();
        const int n = dungeon[0].size();
        for(int i = m - 1; i >= 0; i--)
            for(int j = n - 1; j>= 0; j--){
                if(i == m - 1 && j == n - 1) dungeon[i][j] = -dungeon[i][j];
                else dungeon[i][j] = min((i+1<m?dungeon[i+1][j]:INT_MAX), (j+1<n?dungeon[i][j+1]:INT_MAX)) - dungeon[i][j]; 
                if(dungeon[i][j] < 0) dungeon[i][j] = 0;
            }
        return dungeon[0][0] + 1;
    }
};