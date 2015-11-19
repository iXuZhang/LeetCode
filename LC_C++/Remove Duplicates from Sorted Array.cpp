// Remove Duplicates from Sorted Array
class Solution {
public:
    // Remove Duplicates by Two Pointers
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int index = 1;
        for(int i = 0; i + 1 < nums.size(); i++){
            if(nums[i] != nums[i+1]) nums[index++] = nums[i+1];
        }
        return index;
    }
};