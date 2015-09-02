class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if(nums.empty()) return res;
        int begin = nums[0];
        nums.push_back(nums.back()); // make sure a more loop
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] - nums[i-1] != 1){
                if(begin != nums[i-1]) 
                    res.push_back(to_string(begin) + "->" + to_string(nums[i-1]));
                else res.push_back(to_string(begin));
                begin = nums[i];
            }
        }
        return res;
    }
};