// Product of Array Except Self
class Solution {
public:
    // without division and in O(n) time and O(1) space
    vector<int> productExceptSelf(vector<int>& nums) {
        if(nums.empty()) return {};
        vector<int> res(nums.begin(), nums.end());
        const int n = nums.size();
        for(int i = 0; i < n-1; i++)
            res[i+1] *= res[i];
        int right = 1;
        for(int i = n-1; i >= 1; i--){
            res[i] = right*res[i-1];
            right *= nums[i];
        }
        res[0] = right;
        return res;
    }
};