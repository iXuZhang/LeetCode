// First Missing Positive
class Solution {
public:
    // Put each number in its right place
    // When we find 1, then swap it with A[0].
    int firstMissingPositive(vector<int>& nums) {
        const int n = nums.size();
        for(int i = 0; i < n; i++)
            while(nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i])
                swap(nums[i], nums[nums[i] - 1]);

        for(int i = 0; i < n; i++)
            if(nums[i] != i + 1)
                return i + 1;

        return n + 1;
    }
};