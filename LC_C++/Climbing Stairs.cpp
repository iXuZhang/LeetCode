//Climbing Stairs
class Solution {
public:
    // res[i] = res[i-1] + res[i-2]
    int climbStairs(int n) {
       int res = 1;
       int prev = 0;
       while(n > 0) {
           int temp = res;
           res += prev;
           prev = temp;
           n --;
       }
       return res;
    }
};