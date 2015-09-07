class Solution {
public:
    /* Version 1
    int rob(vector<int>& nums) {
        if(nums.empty()) return 0;
        int prev = 0, res = nums[0]; // prev is 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] + prev > res) {
                int temp = res;
                res = nums[i] + prev;
                prev = temp;
            }
            else{
                prev = res;
            }
        }
        return res;
    }
    */
    
    // Consice Solution
    int rob(vector<int>& nums) {
        int prev = 0, curr = 0;
        for(int num : nums){
            int temp = max(num + prev, curr);
            prev = curr;
            curr = temp;
        }
        return curr;
    }
};