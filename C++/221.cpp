class Solution {
public:
    // use max min to avoid if else and corner cases!!
    int maxProduct(vector<int>& nums) {
        int res = nums[0];
        int prevMax = nums[0];
        int prevMin = nums[0];
        int currMax, currMin;
        for(int i = 1; i<nums.size(); i++){
            currMax = max(max(prevMin*nums[i], prevMax*nums[i]),nums[i]);//Awesome!!!!!
            currMin = min(min(prevMin*nums[i], prevMax*nums[i]),nums[i]);
            res = max(res, currMax);
            prevMax = currMax;
            prevMin = currMin;
        }
        return res;
    }
};