class Solution {
public:
//  Version 1 if(res == target) return res; reduce time
    int threeSumClosest(vector<int>& nums, int target) {
        int res = nums[0]+nums[1]+nums[2],sum;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int j=i+1, k=nums.size()-1;
            while(j<k){
                sum = nums[i]+nums[j]+nums[k];
                if(abs(sum-target)<abs(res-target)) res = sum;
                if(res == target) return res;
                sum-target > 0 ? k--:j++;
            }
        }
        return res;
    }
};