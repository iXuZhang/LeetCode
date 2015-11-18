// Subsets II
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr;
        sort(nums.begin(), nums.end());
        helper(nums, res, curr, 0);
        return res;
    }
    
private:
    void helper(vector<int>& nums, vector<vector<int>>& res, vector<int>& curr, int pos){
        res.push_back(curr);
        for(int i = pos; i < nums.size(); i++){
            curr.push_back(nums[i]);
            helper(nums, res, curr, i+1);
            curr.pop_back();
            while(i + 1 < nums.size() && nums[i+1] == nums[i]) i++;
        }
    }
    
};