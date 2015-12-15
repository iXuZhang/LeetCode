// Wiggle Sort
class Solution {
public:
    // Time: O(n), Space: O(1)
    // if i is odd, i&1 = 1, nums[i] <= nums[i+1]
    // if i is even, i&1 = 0, nums[i] >= nums[i+1]
    void wiggleSort(vector<int>& nums) {
        const int n = nums.size();
        for(int i = 0; i + 1 < n; i++){
            if(i&1 && nums[i+1] > nums[i] || !(i&1) && nums[i+1] < nums[i])
                swap(nums[i], nums[i+1]);
        }
    }
};