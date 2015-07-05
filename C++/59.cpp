class Solution {
public:
    /* Version 1 Direction 4ms
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n,vector<int>(n,0));
        int direction=0, k=1;
        int i=0, j=0, row_min=0, row_max=n-1, column_min=0, column_max=n-1;
        while(row_min<=row_max&&column_min<=column_max){
            res[i][j] = k++;
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
    */
    // Version 2 4ms
    vector<vector<int> > generateMatrix(int n) {
        vector<vector<int> > res( n, vector<int>(n) );
        int k = 1, i = 0;
        while( k <= n * n )
        {
            int j = i; // four steps
            while( j < n - i )             // 1. horizonal, left to right
                res[i][j++] = k++;
            j = i + 1;
            while( j < n - i )             // 2. vertical, top to bottom
                res[j++][n-i-1] = k++;
            j = n - i - 2;
            while( j > i )                  // 3. horizonal, right to left 
                res[n-i-1][j--] = k++;
            j = n - i - 1;
            while( j > i )                  // 4. vertical, bottom to  top 
                res[j--][i] = k++;
            i++;     // next loop
            }
            return res;
        }    
};