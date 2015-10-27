// Set Matrix Zeroes
class Solution {
public:
    // Space O(1)
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        bool col0 = false;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(j == 0 && matrix[i][j] == 0) col0 = true;
                else if(matrix[i][j] == 0){
                    matrix[i][0] = matrix[0][j] = 0;
                }
            }
        }
        for(int i = m - 1; i >= 0; i--){
            for(int j = n - 1; j >= 1; j--){
               if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
            if(col0) matrix[i][0] = 0;
        }
    }
};