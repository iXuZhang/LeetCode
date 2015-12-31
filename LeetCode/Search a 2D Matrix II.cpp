// Search a 2D Matrix II
class Solution {
public:
    // O(m+n)
    // matrix[0][n-1] or matrix[m-1][0] is the begin, has two way to become larger or smaller
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()) return false;
        const int m = matrix.size();
        const int n = matrix[0].size();
        int i = m - 1;
        int j = 0;
        while(i >= 0 && j < n){
            if(matrix[i][j] < target) j++;
            else if(matrix[i][j] > target) i--;
            else return true;
        }
        return false;
    }
};