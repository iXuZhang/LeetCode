class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if (matrix.empty()) return res;
        int direction = 0;
        int i=0, j=0, row_min = 0, row_max = matrix.size()-1, column_min = 0, column_max = matrix[0].size()-1;
        while(row_min<=row_max&&column_min<=column_max){
            res.push_back(matrix[i][j]);
            if(direction == 0){
                if(j==column_max){
                    direction =1;
                    i++;
                    row_min++;
                }
                else j++;
            }
            else if(direction == 1){
                if(i== row_max){
                    direction = 2;
                    j--;
                    column_max--;
                }
                else i++;
            }
            else if(direction == 2){
                if(j== column_min){
                    direction =3;
                    i--;
                    row_max--;
                } 
                else j--;
            }
            else{
                if(i== row_min){
                    direction =0;
                    j++;
                    column_min++;
                } 
                else i--;
            }
        }
        return res;
    }
};