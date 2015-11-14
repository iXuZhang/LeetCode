// Combination Sum II
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        sort(candidates.begin(), candidates.end());
        helper(res, candidates, curr, target, 0);
        return res;
    }
    
private:
    void helper(vector<vector<int>>& res, vector<int>& candidates, vector<int>& curr, int target, int pos){
        if(!target){
            res.push_back(curr);
            return;
        }
        for(int i = pos; i < candidates.size() && candidates[i] <= target; i++){
            curr.push_back(candidates[i]);
            helper(res, candidates, curr, target - candidates[i], i+1);
            curr.pop_back();
            while(i+1 < candidates.size() && candidates[i] == candidates[i+1]) i++;
        }
    }
};