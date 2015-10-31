// Sort Colors
class Solution {
public:
    // One Pass + O(1) Space
    void sortColors(vector<int>& nums) {
        const int n = nums.size();
        int zero = 0, two = n - 1; // pointer after zero, before two
        for(int i = 0; i <= two;){
            if(nums[i] == 0) 
                swap(nums[i++],nums[zero++]);
            else if(nums[i] == 2) 
                swap(nums[i],nums[two--]);
            else i++;
        }
    }
};