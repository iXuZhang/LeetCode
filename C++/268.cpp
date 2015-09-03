class Solution {
public:
    // Time O(n) SpaceO(1)
    int missingNumber(vector<int>& nums) {
        int res = nums.size();
        for(int i = 0; i < nums.size(); i++) res ^= i ^ nums[i];
        return res;
    }
};