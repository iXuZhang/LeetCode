class Solution {
public:
    // into 2 robs
    int rob(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        else if(nums.size() == 1) return nums[0];
        return max(robber(nums,0,nums.size()-2),robber(nums,1,nums.size()-1));
    }
        
private:
    int robber(vector<int>& nums, int begin, int end){
        int curr = 0, prev = 0;
        for(int i = begin; i <= end; i++){
            int temp = max(nums[i] + prev, curr); // Awesome!
            prev = curr;
            curr = temp;
        }
        return curr;
    }
};