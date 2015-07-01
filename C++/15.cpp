class Solution {
public:
    // for+2Sum  two pointers~
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i = 0; i<nums.size(); i++){
            int j = i+1,k = nums.size() - 1;
            if(i == 0 || nums[i-1] != nums[i])
            while(j < k){
                if(nums[i]+nums[j]+nums[k] == 0) {
                    res.push_back({nums[i],nums[j],nums[k]});
                }
                if(nums[i]+nums[j]+nums[k] > 0){
                    while(nums[k-1] == nums[k]) k--;
                    k--;
                }
                else{
                    while(nums[j+1] == nums[j]) j++;
                    j++;
                }
            }
        }
        return res;
    }
};