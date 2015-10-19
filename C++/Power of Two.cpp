// Power of Two
class Solution {
public:
    // Bit Manipulation
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        return !(n&(n-1));
    }
};