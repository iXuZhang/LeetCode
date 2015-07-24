class Solution {
public:
    // 8ms ~~ 
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr;
        length = nums.size();
        sort(nums.begin(),nums.end());
        backTracking(res,nums,curr,0);
        return res;
    }

private:
    int length; 
    void backTracking(vector<vector<int>>& res, vector<int>& nums, vector<int>& curr, int n){
        res.push_back(curr);
        for(;n<length;n++){
            curr.push_back(nums[n]);
            backTracking(res,nums,curr,n+1);
            curr.pop_back();
            while(n<nums.size()-1&&nums[n]==nums[n+1])
                n++;
        }
    }
};