// Palindrome Number
class Solution {
public:
    // string is slow
    // compare the whole
    // compare half is a little tricky
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int prev = x;
        int res = 0;
        while(x){
            res = res*10 + x%10;
            x /= 10;
        }
        return prev == res;
    }
};