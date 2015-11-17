// Next Permutation
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        const int n = nums.size();
        int i = n - 1;
        while(i > 0 && nums[i-1] >= nums[i]) i--;
        if(i == 0){
          nums = vector<int>(nums.rbegin(), nums.rend());
          return;
        }
        int k = n - 1;
        while(nums[k] <= nums[i-1]) k--;
        swap(nums[k], nums[i-1]);
        sort(nums.begin()+i, nums.end());
    }
};