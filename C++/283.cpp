class Solution {
public:
    // left = begin of 0s
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        while(left < nums.size() && nums[left] != 0) left++;
        for(int right = left; right < nums.size(); right++)
            if(nums[right] != 0) swap(nums[left++],nums[right]);
    }
};