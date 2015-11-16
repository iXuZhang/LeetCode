// Search for a Range
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right){ // visit every element
            int mid = left + (right - left)/2;
            if(nums[mid] < target) left = mid + 1;
            else if(nums[mid] > target) right = mid -1;
            else{
                int begin = mid, end = mid;
                while(begin - 1 >= left && nums[begin] == nums[begin - 1]) begin--;
                while(end + 1 <= right && nums[end] == nums[end + 1]) end++;
                return {begin, end};
            }
        }
        return {-1, -1};
    }
};