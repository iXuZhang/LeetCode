// House Robber II
class Solution {
public:
    // res[i] = max(res[i-2] + nums[i], res[i]) 
    // put the circle into two lines
    // 1st line, whithout the last house
    // 2nd line, without 1nd house
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        return max(helper(nums,0, nums.size() - 2), helper(nums, 1 , nums.size()-1));
    }

private:
    int helper(vector<int>& nums, int begin, int end){
        int res = 0;
        int pprev = 0;
        for(int i = begin; i <= end; i++){
            int temp = res;
            res = max(res, pprev + nums[i]);
            pprev = temp;
        }
        return res;
    }
};