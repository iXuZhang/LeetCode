// Single Number III
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int diff = 0;
        for(int num : nums)
            diff ^= num;
        diff &= -diff; 
        int num1 = 0;
        int num2 = 0;
        for(int num : nums){
            if( (num & diff) == 0)
                num1 ^= num;
            else num2 ^= num;
        }
        return {num1, num2};
    }
};