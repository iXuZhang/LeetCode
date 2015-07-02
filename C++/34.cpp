class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int min = 0;
        int max = nums.size()-1;
        int mid;
        while(min<=max){
            mid = (max + min)/2;
            if(nums[mid]==target) break;
            if(nums[mid]>target) max = mid-1;
            else min = mid+1;
        }
        if(nums[mid]!= target) return{-1,-1};
        int n = mid;
        while(nums[mid]==target&&mid>=0) mid--;
        while(nums[n]==target&&n<nums.size()) n++;
        return {mid+1,n-1};
    }
};