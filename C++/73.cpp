class Solution {
public:
    // O(1)space 84ms
    void setZeroes(vector<vector<int>>& matrix) {
        bool first_row = false, first_column = false;
        for(int i = 0;i!=matrix.size();i++)
            for(int j = 0;j!=matrix[0].size();j++)
                if(matrix[i][j] == 0){
                    if(i==0) first_row = true;
                    else matrix[i][0] = 0;
                    if(j==0) first_column = true;
                    else matrix[0][j] = 0;
                }
        for(int i = 1;i<matrix.size();i++) //i<matrix.size()  important <  
            for(int j = 1;j<matrix[0].size();j++)
                if(matrix[i][0]==0 || matrix[0][j]==0) matrix[i][j] = 0;
        if(first_row) for(int k=0;k!=matrix[0].size();k++) matrix[0][k] = 0;// k!=matrix[0].size()
        if(first_column) for(int k=0;k!=matrix.size();k++) matrix[k][0] = 0;
    }
};