class Solution {
public:
    int mySqrt(int x) {
        if(!x) return 0;
        long left = 1;
        long right = x;
        while(left<=right){
            long mid = (left + right)/2; //long
            if(mid*mid <= x && x < (mid+1)*(mid+1)) return mid;
            else if (mid*mid > x) right = mid -1;
            else left = mid +1;
        }
    }
};