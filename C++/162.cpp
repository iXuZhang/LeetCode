class Solution {
public:
    /* Time O(log) Bad solusion
    int findPeakElement(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        while(left < right){
            int mid = (left + right)/2;
            if(nums[left] > nums[mid]) right = mid - 1;
            else if(nums[right] > nums[mid]) left = mid + 1;
            else{   //case [1,4,1], case[1,2,4,5,1], case[1,2,1,2,1]
                if(left < right && nums[right] <= nums[mid]) right--;
                if(left < right && nums[left] <= nums[mid]) left++;
            }
        }
        return left;
    }
    */
    
    // Time O(log) compare with neighbor Awesome
    // --- mid1 mid2 ----
    int findPeakElement(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        while(left < right){
            int mid1 = (left + right)/2;
            int mid2 = mid1 + 1;
            if(nums[mid1] > nums[mid2]) right = mid1;
            else left = mid2;
        }
        return left;
    }    
};