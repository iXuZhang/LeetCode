// 3Sum Closest
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int res = nums[0] + nums[1] + nums[2];
        const int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n - 2; i++){
            int left = i + 1;
            int right = n - 1;
            while(left < right){
                int sum = nums[left] + nums[right] + nums[i];
                if(abs(target - sum) < abs(target - res)) res = sum;
                if(sum < target){
                    //while(left + 1 < right && nums[left] == nums[left+1]) left++;
                    left++; 
                } 
                else if(sum > target){
                   //while(left < right -1 && nums[right] == nums[right-1]) right--;
                   right--; 
                }
                else return res;
            }
            while( n+1 < n - 2 && nums[i] == nums[i+1]) i++;
        }
        return res;
    }
};