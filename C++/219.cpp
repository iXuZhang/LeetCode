class Solution {
public:
    /* Slow Solution
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> table;
        for(int i = 0; i != nums.size(); i++){
            if(table.find(nums[i]) != table.end() && i - table[nums[i]] <= k) return true;
            table[nums[i]] = i;
        }
        return false;
    }
    */
    
    // Fast solusion 12ms
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        vector<int> table(pow(2,15),-1); // int 0 -> pow(2,31) -1;
        for(int i = 0; i != nums.size(); i++){
            if(table[nums[i]] != -1 && i - table[nums[i]] <= k) return true;
            table[nums[i]] = i;
        }
        return false;
    }    
};