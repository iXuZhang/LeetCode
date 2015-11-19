// Perfect Squares
class Solution {
public:
    int numSquares(int n) {
        static vector<int> table = {0};
        for(int i = table.size(); i <= n; i++){
            table.push_back(table[i-1] + 1);
            for(int j = 1; j*j <= i; j = j+1){
                int k = j*j;
                table[i] = min(table[i], 1 + table[i-k]);
            }
        }
        return table[n];
    }
};