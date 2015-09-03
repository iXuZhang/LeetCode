class Solution {
public:
    /* Version 1
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(),0);
        int index = -1;
        int product = 1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) product *= nums[i];
            else if(nums[i] == 0 && index == -1) index = i;
            else return res;
        }
        if(index != -1){
            res[index] = product;
            return res;
        }
        for(int i = 0; i < nums.size(); i++) res[i] = product/nums[i];
        return res;
    }
    */
    
    // Version 2 Awesome! USE only *, no /. Just product the left and right values!!
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 1);
        for(int i = 1; i < n; i++){
            res[i] = nums[i-1] * res[i-1];
        }
        for(int i = n-1, right = 1; i >= 0; i--){
            res[i] *= right;
            right *= nums[i];
        }
        return res;
    }
};