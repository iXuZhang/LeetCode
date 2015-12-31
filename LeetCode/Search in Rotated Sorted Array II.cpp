// Search in Rotated Sorted Array II
class Solution {
public:
    /*
    1 2 3 4 5
    4 5 1 2 3
    1 1 1 1 1
    */
    bool search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right){
            while(left < right && nums[left] == nums[left+1]) left++;
            while(left < right && nums[right] == nums[right-1]) right--;
            int mid = left + (right - left)/2;
            if(nums[mid] == target) return true;
            if(nums[left] < nums[mid] && target < nums[mid] && target >= nums[left]
                || nums[left] > nums[mid] &&(target < nums[mid] || target >= nums[left]))
            right = mid - 1;
            else left = mid + 1;
        }
        return false;
    }
};