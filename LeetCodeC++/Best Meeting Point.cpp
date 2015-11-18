// Best Meeting Point
class Solution {
public:
    // meet in the median pos 
    int minTotalDistance(vector<vector<int>>& grid) {
        const int m = grid.size();
        const int n = grid[0].size();
        vector<int> row;
        vector<int> column;
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(grid[i][j] == 1){
                    row.push_back(i);
                    column.push_back(j);
                }
        int res = 0;
        sort(column.begin(), column.end());
        for(int i = 0; i < row.size()/2; i++)
            res += row[row.size()-1-i] - row[i];
        for(int i = 0; i < column.size()/2; i++)
            res += column[column.size()-1-i] - column[i];    
        return res;
    }
};