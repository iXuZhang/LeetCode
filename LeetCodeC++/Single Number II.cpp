// Single Number II
class Solution {
public:
    // 00 -> 01 -> 10 -> 00(11)
    // num is 0 or 1
    // num 0    num 1
    // 00 00    00 01     
    // 01 01    01 10
    // 10 10    10 00
    int singleNumber(vector<int>& nums) {
        int first = 0;
        int second = 0;
        for(int num : nums){
            first = (num ^ first) & (~second);
            second = (num ^ second) & (~first);
        }
        return first;
    }
};