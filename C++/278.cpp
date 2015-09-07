// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    // Binary Search
    int firstBadVersion(int n) {
        int left = 1, right = n;
        while(left < right){
            int mid = left + (right - left)/2; // To prevent overflow!!!
            if(isBadVersion(mid)) right = mid;
            else left = mid + 1;
        }
        return left;
    }
};