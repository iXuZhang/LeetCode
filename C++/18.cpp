class Solution {
public:
// Version 1   1.target3 = target - nums[i]; reduce time    2.while(m<n && nums[n-1]==nums[n]) n--; run it after push_back;
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        int length = nums.size(),sum;
        for(int i=0; i<length; i++){
            int target3 = target - nums[i];
            for(int j=i+1; j<length; j++){
                int m=j+1, n=length-1;
                int target2 = target3 -nums[j];
                while(m<n){
                    sum = nums[m]+nums[n];
                    if(sum > target2) n--;
                    else if(sum < target2) m++;
                    else{
                        res.push_back({nums[i],nums[j],nums[m],nums[n]});
                        while(m<n && nums[n--]==nums[n]) ; // =  while(m<n && nums[n-1]==nums[n]) n--; n--;
                        while(m<n && nums[m++]==nums[m]) ;
                    } 
                }
                while(j+1<length && nums[j+1]==nums[j]) j++;
            }
            while(i+1<length && nums[i+1]==nums[i]) i++;
        }
        return res;
    }
};