class Solution {
public:
    /*Version1 Binary Search - offset 8ms
    bool search(vector<int>& nums, int target) {
        int length = nums.size();
        int offset = 0; // offset
        if(nums.size()>1)
            while(offset<1||nums[offset-1]<=nums[offset]&&offset<length) offset++;
        int left = 0;
        int right = nums.size()-1;
        while(left<=right){
            int mid = (left+right)/2;// mid = (left + right) >> 1;
            int mid_offset = mid + offset; // map method
            if(mid_offset>=length) mid_offset -= length;
            if(nums[mid_offset]==target) return true;
            if(nums[mid_offset]>target) right = mid-1;
            else left = mid + 1;
        }
        return false;
    }
    */
    
    //Version2 Binary Search 8ms
    bool search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        while(left<=right){
            int mid = (left+right)>>1;
            if(nums[mid]==target) return true;
            while(nums[mid]==nums[left]&&nums[mid]==nums[right]){
                left++;
                right--;
            }// tricky case 13111 or 11131
            if(nums[left]<=nums[mid])
                if(nums[left]<=target&&target<nums[mid]) right = mid-1;
                else left = mid + 1;
            else 
                if(nums[mid]<target&&target<=nums[right]) left = mid+1;
                else right = mid-1;
        }
        return false;
    }
};