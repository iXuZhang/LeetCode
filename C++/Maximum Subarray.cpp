// Maximum Subarray
class Solution {
public:
    // Time : O(n)
    // res[i] presents Maximum Subarray ended with i
    // res[i] = max(res[i], res[i-1] + nums[i])
    int maxSubArray(vector<int>& nums) {
        int res = nums[0];
        int prev = nums[0];
        for(int i = 1; i < nums.size(); i++){
            prev = max(prev + nums[i], nums[i]);
            res = max(res, prev);
        }
        return res;
    }
};