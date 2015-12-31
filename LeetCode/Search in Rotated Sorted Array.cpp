// Search in Rotated Sorted Array
class Solution {
public:
    /*
    3 4 5 6 1 2
    1 2 3 4 5 6
    6 1 2 3 4 5
    */
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right){ // go through every element
            int mid = left + (right - left)/2;
            if(target == nums[mid]) return mid;
            if(nums[left] < nums[mid] && target < nums[mid] && target >= nums[left] 
                || nums[left] > nums[mid] && (target < nums[mid] || target >= nums[left])) 
            right = mid - 1;
            else left = mid + 1;
        }
        return -1;
    }
};