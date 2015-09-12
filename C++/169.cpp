class Solution {
public:
    /* Concise Solution
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
    */
    
    // Vote Solution
    int majorityElement(vector<int>& nums) {
        int majority = 0; // count = 0, it does not matter;
        int count = 0;
        for(int num : nums){
            if(majority == num) count++;
            else if(count == 0){
                majority = num;
                count = 1;
            }
            else count--;
        }
        return majority;
    }    
};