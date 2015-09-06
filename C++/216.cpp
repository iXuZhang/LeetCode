class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> curr;
        backTracking(res, curr, k, n, 1);
        return res;
    }

private:
    void backTracking(vector<vector<int>>& res, vector<int>& curr, int k, int n, int pos){
        if(k == 0 && n == 0) res.push_back(curr);
        else if(k > 0 && n > 0){
            while(pos < 10){
                curr.push_back(pos);
                backTracking(res, curr, k-1, n-pos, pos+1);
                curr.pop_back();
                pos++;
            }
        }
    }
};