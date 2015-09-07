class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0, j = 0;
        while(j >= 0){
            if(matrix[i][j] == target) return true;
            if( j + 1< matrix[0].size() && matrix[i][j+1] <= target) j++;
            else if(i + 1 < matrix.size() && matrix[i+1][j] <= target) i++;
            else { 
                matrix[i][j] = target + 1; // make sure it will not go forward
                j--;
            }
        }
        return false;
    }
};