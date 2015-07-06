class Solution {
public:
    /* Version 1 maths combination m-1  m+n-2 choices 0 ms
    int uniquePaths(int m, int n) {
        if(m>n){
            m = m^n;
            n = m^n;
            m = m^n;
        }
        long long a = 1, b = 1;
        for(int i=m+n-2;i>n-1;i--) a *= i;
        for(int i=1;i<=m-1;i++) b *= i;
        return a/b;
    }
    */
    // Version 2 DP     0 ms
    int uniquePaths(int m, int n) {
        vector<vector<int>> nums(m,vector<int>(n,1));
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++)
                nums[i][j] = nums[i-1][j] + nums[i][j-1];
        }
        return nums[m-1][n-1];
    }
};