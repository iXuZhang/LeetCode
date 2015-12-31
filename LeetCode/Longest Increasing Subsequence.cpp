// Longest Increasing Subsequence
class Solution {
public:
    // nlogn
    // 1 2 5 7 3
    int lengthOfLIS(vector<int>& nums) {
        vector<int> res;
        for(int i = 0; i < nums.size(); i++){
            auto it = lower_bound(res.begin(), res.end(), nums[i]); // lowerbound < nums[i] O(logn)
            if(it == res.end()) res.push_back(nums[i]); // a new larger member
            else *it = nums[i];
        }
        return res.size();
    }
};