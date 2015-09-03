class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        while(left<right){
            while(left <= right-1 && nums[right] == nums[right-1]) right--; // case [3,1,3,3,3]
            while(left+1 <= right && nums[left] == nums[left+1]) left++; // case [3,1,3,3,3]
            int mid = (left + right)/2;
            if(nums[mid] > nums[right]) left = mid + 1;
            else right = mid;
        }
        return nums[left];
    }
};