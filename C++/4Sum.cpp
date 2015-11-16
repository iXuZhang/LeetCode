// 4Sum
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        const int n = nums.size();
        for(int i = 0; i < n - 3; i++){
            if(nums[i]+nums[i+1]+nums[i+2]+nums[i+3] > target) break;
            if(nums[i]+nums[n-3]+nums[n-2]+nums[n-1]<target) continue;
            for(int j = i + 1; j < n - 2; j++){
                if(nums[i]+nums[j]+nums[j+1]+nums[j+2] > target) break;
                if(nums[i]+nums[j]+nums[n-2]+nums[n-1]<target) continue;
                int left = j + 1;
                int right = n - 1;
                int target2 = target - nums[i] - nums[j];
                while(left < right){
                    if(nums[left] + nums[right] < target2){
                        left++;
                    } 
                    else if(nums[left] + nums[right] > target2){
                        right--;
                    } 
                    else{
                        res.push_back({nums[i],nums[j],nums[left],nums[right]});
                        while(left + 1< right && nums[left] == nums[left + 1]) left++;
                        while(left < right - 1 && nums[right] == nums[right - 1]) right--;
                        left++;
                        right--;
                    }
                }
                while(j + 1 < n - 2 && nums[j] == nums[j+1]) j++; 
            }
            while(i + 1 < n - 3 && nums[i] == nums[i+1]) i++;
        }
        return res;
    }
};