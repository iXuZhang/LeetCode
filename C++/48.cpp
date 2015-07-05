class Solution {
public:
    /* Version 1 4ms 
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        //(i,j) ->(j,n-1-i)
        for(int k=0;k<n/2;k++){
            for(int i=k,j=k;i<n-1-k;i++){
             swap(matrix[i][j],matrix[n-1-j][i]);
             swap(matrix[n-1-j][i],matrix[n-1-i][n-1-j]);
             swap(matrix[n-1-i][n-1-j],matrix[j][n-1-i]);
            }
        }
    }
    */
    // Version 2 Awesome! 4ms
    void rotate(vector<vector<int>>& m) {
        int n = m.size();
        for(int i=0; i<n; i++)
            for(int j=0; j<i; j++)
                swap(m[i][j], m[j][i]);
        for(int i=0; i<n; i++)
            reverse(m[i].begin(), m[i].end());
    }
};