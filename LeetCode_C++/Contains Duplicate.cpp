// Contains Duplicate
class Solution {
public:
    // Time: O(n), Space: O(n)
    // unordered_set
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() > unordered_set<int>(nums.begin(), nums.end()).size(); 
    }
};