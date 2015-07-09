class Solution {
public:
    // 0ms
    int climbStairs(int n) {
    int prev = 1;
    int curr = 1;
    while(--n>0){
        int temp = curr;
        curr += prev;
        prev = temp;
    }
    return curr;
    }
};