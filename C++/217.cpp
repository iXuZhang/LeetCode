class Solution {
public:
    /* Slow solusion
    bool containsDuplicate(vector<int>& nums) {
        set<int> table;
        for(int n:nums)
            if(table.find(n) == table.end()) table.insert(n);
            else return true;
        return false;
    }
    */
    
    // Consice solution  Just like in Python
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() > set<int>(nums.begin(), nums.end()).size(); 
    }

};