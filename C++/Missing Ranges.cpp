// Missing Ranges
class Solution {
public:
    vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
        vector<string> res;
        sort(nums.begin(), nums.end());
        const int n = nums.size();
        int prev = lower - 1; // lower - 1
        for(int i = 0; i < n; i++){
            if(nums[i] > prev + 1){ // > not !=
                string temp = to_string(prev + 1);
                if(nums[i] - 1 !=  prev + 1) temp += "->" + to_string(nums[i] - 1);
                res.push_back(temp);
            }
            prev = nums[i];
        }
        if(prev < upper){
            string temp = to_string(prev + 1);
            if(prev + 1 != upper) temp += "->" + to_string(upper);
            res.push_back(temp);
        }
        return res;
    }
};