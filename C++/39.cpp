class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> current;
        sort(candidates.begin(),candidates.end());
        backTracking(candidates.begin(), res, current, candidates, target);
        return res;
    }
    
    void backTracking(vector<int>::iterator i, vector<vector<int>>& res, vector<int>& current, const vector<int>& candidates, const int target){
        if(!target) res.push_back(current);
        else if(target>0)
            for(; i!= candidates.end() && *i<= target; ++i){
                current.push_back(*i);
                backTracking(i,res, current, candidates, target-*i);
                current.pop_back();
            }
    }
};