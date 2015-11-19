// Two Sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> table;
        const int n = nums.size();
        for(int i = 0; i< n; i++){
            if(table.count(target - nums[i])) return {table[target - nums[i]]+1, i+1};
            table[nums[i]] = i;
        }
    }
};