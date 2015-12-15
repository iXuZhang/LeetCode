// Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.empty()) return {};
        const int m = matrix.size();
        const int n = matrix[0].size();
        vector<int> res;
        int dir = 0, begin_m = 0, begin_n = 0, end_m = m - 1, end_n = n - 1;
        for(int k = 0, i = 0, j = 0; k < m*n; k++){
            res.push_back(matrix[i][j]);
            if(dir == 0){
                if(j == end_n){
                    dir = 1;
                    i++;
                    begin_m++;
                } 
                else j++;
            }
            else if(dir == 1){
                if(i == end_m){
                   dir = 2;
                   j--;
                   end_n--;
                }
                else i++;
            }
            else if(dir == 2){
                if(j == begin_n){
                    dir = 3;
                    i--;
                    end_m--;
                }
                else j--;
            }
            else{
                if(i == begin_m){
                    dir = 0;
                    j++;
                    begin_n++;
                }
                else i--; 
            }
        }
        return res;
    }
};