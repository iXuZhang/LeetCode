class Solution {
public:
    /* Version 1
     int removeDuplicates(vector<int>& nums) {
     if(nums.size()<=1) return nums.size();
     int length = 0;
     for(int i=1;i<nums.size();i++)
     if(nums[length]!=nums[i])
     nums[++length] = nums[i];
     return length+1;
     }
     */
    
    //Version 2
    int removeDuplicates(vector<int>& nums) {
        int length = 0;
        for(int n:nums) //for(int i=0;i!=nums.size();i++)
            if(length<1||nums[length-1]!= n) //Awesome
                nums[length++] = n;
        return length;
    }
    
};