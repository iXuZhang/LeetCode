// Factor Combinations
class Solution {
public:
    vector<vector<int>> getFactors(int n) {
        return helper(n ,2);
    }
    
    vector<vector<int>> helper(int n, int pos){
        vector<vector<int>> res;
        int m = sqrt(n);// important
        for(int i = pos; i <= m; i++){
            if(n%i == 0){
                vector<vector<int>> temp = helper(n/i, i);
                res.push_back({i,n/i});
                for(auto v : temp){
                    v.insert(v.begin(),i);
                    res.push_back(v);
                }
            }
        }
        return res;
    }
};