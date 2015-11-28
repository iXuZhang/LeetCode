// Sparse Matrix Multiplication
class Solution {
public:
    vector<vector<int>> multiply(vector<vector<int>>& A, vector<vector<int>>& B) {
        const int m = A.size();
        const int n = A[0].size();
        const int l = B[0].size();
        vector<vector<int>> res(m, vector<int>(l,0));
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(A[i][j]){
                    for(int k = 0; k < l; k++)
                        res[i][k] += A[i][j]*B[j][k];
                }
        return res;
    }
};