// Remove Element
class Solution {
public:
    // left: go through
    // right: after right are elements of val
    int removeElement(vector<int>& nums, int val) {
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right){ // corner case [1]
            if(nums[right] == val) right--;
            else{
               if(nums[left] == val)
                swap(nums[left], nums[right]);
               left++;
            }
        }
        return right+1;
    }
};