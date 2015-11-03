// Subsets
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr;
        sort(nums.begin(), nums.end());
        helper(res, nums, curr, 0);
        return res;
    }
    
    void helper(vector<vector<int>>& res, vector<int>& nums, vector<int>& curr, int pos){
        res.push_back(curr);
        for(int i = pos; i < nums.size(); i++){
            curr.push_back(nums[i]);
            helper(res, nums, curr, i+1);
            curr.pop_back();
        }
    }
};