// Summary Ranges
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if(nums.empty()) return res;
        nums.push_back(nums[0]);
        int prev = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] != INT_MAX && nums[i] == nums[i-1] + 1) continue; // Overflow
            string temp = to_string(prev);
            if(nums[i-1] != prev) temp += "->" + to_string(nums[i-1]);
            res.push_back(temp);
            prev = nums[i];
        }
        nums.pop_back();
        return res;
    }
};