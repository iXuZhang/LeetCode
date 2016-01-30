//Climbing Stairs
class Solution {
public:
    // res[i] = res[i-1] + res[i-2];
    // 0, 1, 2, 3, 5    
    int climbStairs(int n) {
        int prev = 0;
        int curr = 1;
        for(int i = 0; i < n; i++){
            int temp = curr;
            curr = curr + prev;
            prev = temp;
        }
        return curr;
    }
};    
