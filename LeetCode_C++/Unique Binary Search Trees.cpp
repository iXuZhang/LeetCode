// Unique Binary Search Trees
class Solution {
public:
    // res[i] = res[i-1]*res[0] + res[i-2]*res[1] + ... res[1]*res[i-1] + res[0]*res[i-1]
    int numTrees(int n) {
        vector<int> res(n+1,1);
        for(int i = 1; i <= n; i++){
            for(int j = 0; j <= i-1; j++)
                res[i] += res[i-1-j]*res[j];
        }
        return res[n];
    }
};