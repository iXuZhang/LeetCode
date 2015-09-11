class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int res = nums.size() + 1, curr = 0, right = 0;
        for(int left = 0; left< nums.size(); left++){
            while(right < nums.size() && curr < s)
                curr += nums[right++];
            if(curr >= s) res = min(res, right - left);
            curr -= nums[left];
        }
        return res > nums.size() ?  0 : res;
    }
};