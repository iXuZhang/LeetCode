// Add Digits
class Solution {
public:
    // Possible results 0 | 1,2,3,4,5,6,7,8,9 
    // 1  -> 1
    // 9  -> 9
    // 10 -> 1
    // 18 -> 9
    // 19 -> 10 -> 1
    // Period = 9
    int addDigits(int num) {
        //if(num == 0) return 0;
        return (num - 1) % 9 + 1;
    }
};