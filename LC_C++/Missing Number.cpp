// Missing Number
class Solution {
public:
    // two appear twice, one appear once
    int missingNumber(vector<int>& nums) {
        const int n = nums.size();
        int res = n;
        for(int i = 0; i < n; i++){
            res ^= i;
            res ^= nums[i];
        }
        return res;
    }
};