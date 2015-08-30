class Solution {
public:
    /* Version 1
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);
        if(numRows == 0) return res;// Could not return NULL; 
        res[0].push_back(1);
        for(auto i = 1; i < numRows; i++){
            res[i].push_back(1);
            for(auto j = 0; j < res[i-1].size() - 1; j++)
                res[i].push_back(res[i-1][j] + res[i-1][j+1]);
            res[i].push_back(1);
        }
        return res; 
    }
    */
    
    // Version 2    Concise
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);
        for(auto i = 0; i < numRows; i++){
            res[i].resize(i+1); // resize() to build each vector
            res[i][0] = 1;
            for(auto j = 1; j < i; j++)
                res[i][j] = res[i-1][j-1] + res[i-1][j];
            res[i][i] = 1;
        }
        return res;
    }
};