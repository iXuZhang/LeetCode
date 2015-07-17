class Solution {
public:
    /* Version 1 20ms
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<2) return nums.size(); // important for test
        int prev = 0;
        int curr = 1;
        int count = 1;
        while(curr < nums.size()){
            if(nums[curr]==nums[prev]&&count<2){
                prev++;
                nums[prev] = nums[curr];
                count++;
            }
            else if(nums[curr]!=nums[prev]){
                prev++;
                nums[prev] = nums[curr];
                count=1;
            }
            curr++;
        }
        return prev+1;
    }
    */
    // Version 2 Awesome! 20ms
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int n : nums)
            if (i < 2 || n > nums[i-2])// n > nums[i-2] Awesome! not count
                nums[i++] = n;
        return i;
    }
};