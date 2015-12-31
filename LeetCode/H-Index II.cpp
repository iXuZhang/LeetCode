// H-Index II
class Solution {
public:
    // output can be 0 to n
    // find the largest n - mid which <= citations[mid] 
    // right + 1 is the target index
    int hIndex(vector<int>& citations) {
        const int n = citations.size();
        int left = 0;
        int right = n - 1;
        while(left <= right){
            int mid = left + (right - left)/2;
            if(citations[mid] < n - mid) left = mid + 1;
            else if(citations[mid] > n - mid) right = mid - 1;
            else return n - mid;
        }
        return n - (right + 1);
    }
};