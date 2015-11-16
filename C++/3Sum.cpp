// 3Sum
class Solution {
public:
    // {nums[a], nums[b], nums[c]}
    // there are duplicate number in nums, every pos (a, b, c) should run one time for one letter
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        const int n = nums.size();
        vector<vector<int>> res;
        for(int i = 0; i < n - 2; i++){
            int left = i + 1;
            int right = n - 1;
            int target = -nums[i];
            while(left < right){
                if(nums[left] + nums[right] < target) left++;
                else if(nums[left] + nums[right] > target) right--;
                else{
                    res.push_back({nums[i],nums[left],nums[right]});
                    while(left + 1 < right && nums[left] == nums[left + 1]) left++;
                    left++;
                }
            }
            while(i + 1 < n - 2 && nums[i] == nums[i+1]) i++;
        }
        return res;
    }
};