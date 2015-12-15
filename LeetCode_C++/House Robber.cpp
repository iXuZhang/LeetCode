// House Robber
class Solution {
public:
    // res[i] = max(nums[i] + res[i-2], res[i-1])
    int rob(vector<int>& nums) {
        int maxVal = 0;
        int pprev = 0;
        for(int num : nums){
            int temp = maxVal;
            maxVal = max(num + pprev, maxVal);
            pprev = temp;
        }
        return maxVal;
    }
};