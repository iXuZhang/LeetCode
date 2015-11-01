// Permutations II
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        helper(res, nums, 0);
        return res;
    }
    
    void helper(vector<vector<int>>& res, vector<int> nums, int pos){ // vector<int> nums
        if(pos == nums.size() - 1){
            res.push_back(nums);
            return;
        }
        for(int i = pos; i < nums.size(); i++){
            if(pos != i && nums[pos] == nums[i]) continue;
            swap(nums[pos], nums[i]); // do not swap back to maintain ascending order
            helper(res, nums, pos+1); 
        }
    }
};