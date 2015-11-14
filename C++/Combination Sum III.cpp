// Combination Sum III
class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> curr;
        helper(res, curr, 1, k, n);
        return res;
    }
    
    void helper(vector<vector<int>>& res, vector<int>& curr, int pos, int k, int target){
        if(k == 0){
            if(target == 0) res.push_back(curr);
            return;
        }
        for(int i = pos; i <= 9 && i <= target; i++){
            curr.push_back(i);
            helper(res, curr, i+1, k-1, target - i);
            curr.pop_back();
        }
    }
};