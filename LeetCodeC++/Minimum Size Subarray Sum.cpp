// Minimum Size Subarray Sum
class Solution {
public:
    /*
     3 4 5 6 3  s = 5
     11
    */
    int minSubArrayLen(int s, vector<int>& nums) {
        if(nums.empty()) return 0;
        const int n = nums.size();
        int res = n + 1;
        int sum = 0, begin = 0;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            while(sum - nums[begin] >= s) sum -= nums[begin++];
            if(sum >= s) res = min(res, i - begin + 1); // begin -> i the smallest subarray ending by i >= m;
        }
        return res == n + 1 ? 0 : res;
    }
};