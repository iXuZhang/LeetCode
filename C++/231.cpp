class Solution {
public:
    /* Version 1
    bool isPowerOfTwo(int n) {
        if(n == 1) return true;
        if(n <= 0 || n%2) return false;
        else isPowerOfTwo(n/2);
    }
    */
    
    // Version 2
    // Power of 2 means only one bit of n is '1', so use the trick n&(n-1) ==0 to judge whether that is the case
     bool isPowerOfTwo(int n) {
         if(n <= 0) return false;
         return !(n&(n-1));
     }
};