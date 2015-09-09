class Solution {
public:
    // O(n) map
    int longestConsecutive(vector<int>& nums) {
        int res = 0;
        map<int, int> table;
        for(int num : nums){
            if(table[num]) continue; //duplicates important!!
            table[num] = table[num + 1] + table[num - 1] + 1;
            table[num + table[num + 1]] = table[num];
            table[num - table[num - 1]] = table[num];
            res = max(res, table[num]);
        }
        return res;
    }
};