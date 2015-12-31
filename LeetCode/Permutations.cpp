// Permutations
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        helper(nums, res, 0);
        return res;
    }
    
    void helper(vector<int>& nums, vector<vector<int>>& res, int pos){
        if(pos == nums.size()){
            res.push_back(nums);
            return;
        }
        for(int i = pos; i < nums.size(); i++){
            swap(nums[pos],nums[i]);
            helper(nums,res,pos+1);
            swap(nums[pos],nums[i]);
        }
    }
};