// Search a 2D Matrix
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()) return false;
        const int m = matrix.size();
        const int n = matrix[0].size();
        int left = 0;
        int right = m*n - 1;
        while(left <= right){
            int mid = left + (right - left)/2;
            int i = mid/n;
            int j = mid - n*i;
            if(matrix[i][j] == target) return true;
            else if(matrix[i][j] > target) right = mid - 1;
            else left = mid + 1;
        }
        return false;
    }
};