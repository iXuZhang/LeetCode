// Combinations
class Solution {
public:
    // Combinations, put the number in non-desending order
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> curr;
        helper(res, curr, n, k, 1);
        return res;
    }
    
    void helper(vector<vector<int>>& res, vector<int>& curr, int n, int k, int pos){
        if(k == 0){
           res.push_back(curr);
           return;
        } 
        for(int i = pos; i <= n; i++){
            curr.push_back(i);
            helper(res, curr, n, k-1, i+1);
            curr.pop_back();
        }
    }
};