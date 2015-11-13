// Spiral Matrix II
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> table(n,vector<int>(n,0));
        int i = 0, j = 0, k = 1;
        while(k <= n*n){
            while(j < n && table[i][j] == 0) table[i][j++] = k++;
            i++; j--;
            while(i < n && table[i][j] == 0) table[i++][j] = k++;
            i--; j--;
            while(j >= 0 && table[i][j] == 0) table[i][j--] = k++;
            j++; i--;
            while(i >= 0 && table[i][j] == 0) table[i--][j] = k++;
            i++; j++;
        }
        return table;
    }
};