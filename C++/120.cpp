class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<int> res = triangle.back();
        for(int i=triangle.size()-2; i>=0; i--) // auto is wrong!
            for(int j=0; j<=i; j++)
                res[j] = triangle[i][j] + min(res[j], res[j+1]); // bottom to top
        return res.front();
    }
};