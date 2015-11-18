// 3Sum Smaller
class Solution {
public:
    int threeSumSmaller(vector<int>& nums, int target) {
        int count = 0;
        const int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n-2; i++){
            int target2 = target - nums[i];
            int left = i + 1;
            int right = n - 1;
            while(left < right){
                if(nums[left] + nums[right] >= target2) right--;
                else{
                    count += right -left;
                    left++;
                }
            }
        }
        return count;
    }
};