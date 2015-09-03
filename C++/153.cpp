class Solution {
public:
    /* Version 1
    int findMin(vector<int>& nums) {
        for(int i = 0; i < nums.size() -1; i++)
            if(nums[i] > nums[i+1]) return nums[i+1];
        return nums[0];
    }
    */
    
    // Version 2
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        while(left < right){
            int mid = (left + right)/2;
            if(nums[mid] > nums[right]) left = mid + 1;
            else right = mid; //important find the descending half XX to mid or mid to XX
        }
        return nums[left]; // or nums[right]
    }
};