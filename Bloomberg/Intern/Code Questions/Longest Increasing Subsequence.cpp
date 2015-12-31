/*
	求里面的最长单向increase或单向decrease的sequence
	Longest Increasing Subsequence LeetCode
*/


class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> res;
        for(int num : nums){
            auto it = lower_bound(res.begin(), res.end(), num);
            if(it == res.end()) res.push_back(num);
            else *it = num;
        }
        return res.size();
    }
};
