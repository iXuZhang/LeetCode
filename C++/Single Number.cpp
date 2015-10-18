// Single Number
class Solution {
public:
    // Time: O(n), Space: O(1)
    // a^a = 0;
    // 0^a = a;
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int num : nums) res ^= num;
        return res;
    }
};