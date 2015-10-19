// Contains Duplicate II
class Solution {
public:
    // a set of size k is enough
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> table;
        for(int i = 0; i <nums.size(); i++){
            if(table.size() > k) table.erase(nums[i-1-k]); // draw a pic k = 1, when i = 2, del nums[0]
            if(table.count(nums[i]) > 0) return true;
            else table.insert(nums[i]);
        }
        return false;
    }
};