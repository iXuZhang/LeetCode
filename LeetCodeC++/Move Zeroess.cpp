// Move Zeroess
class Solution {
public:
    /* two pointers  20ms
    // Time: O(n), Space: O(1);
    void moveZeroes(vector<int>& nums) {
        int head = -1; // head of zeros
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0 && head == -1)
                head = i;
            else if(head != -1 && nums[i] != 0){
                swap(nums[i], nums[head]);
                head++;
            }
        }
    }
    */
    
    // a clever solution 28ms
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for(int num : nums)
            if(num != 0) nums[i++] = num;
        while(i < nums.size()) 
            nums[i++] = 0;
    }
};