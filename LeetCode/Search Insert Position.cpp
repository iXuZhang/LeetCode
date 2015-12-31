// Search Insert Position
class Solution {
public:
    // important!!! , easy to be wrong
    // while(left <= right)
    // [1, 3] target = 0; left = right = 0; => [1] > target, ans = left = 0;
    // [1, 3] target = 2; left = right = 1; => [3] > target, ans = left = 1;
    // [1, 3] target = 4; left = right = 1; => [3] < target, ans = left + 1 = 2;
    // while(left <= right)
    // [1] target = 0; left = 0, right = -1;    ans = left;
    // [1] target = 2; left = 1, right = 0;     ans = left;
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right){
            int mid = (left + right)/2;
            if(target == nums[mid]) return mid;
            if(target > nums[mid]) left = mid + 1;
            else right = mid - 1;
        }
        return  left;
    }
};