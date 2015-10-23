// First Bad Version
// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long left = 1;
        long right = n;
        while(left < right){
            long mid = (left + right)/2; // overflow
            if(isBadVersion(mid)) right = mid;
            else left = mid + 1;
        }
        return left;
    }
};