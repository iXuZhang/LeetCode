// Sqrt(x)
class Solution {
public:
    int mySqrt(int x) {
        return BFS(0, x, x);
    }

private:
    int BFS(long i, long j, long target){
        while(i < j){
            long mid = (i + j)/2;
            if(mid * mid <= target && (mid + 1)*(mid + 1) > target) return mid;
            if(mid * mid < target) i = mid + 1;
            else j = mid - 1;
        }
        return i;
    }
};