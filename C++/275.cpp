class Solution {
public:
    /* O(n)
    int hIndex(vector<int>& citations) {
        int res = 0, n = citations.size();
        for(int i = n -1 ; i >= 0; i--)
            if(citations[i] >= n - i ) res = n - i;
        return res;
    }
    */
    
    // O(log(n)) Binary Search
    int hIndex(vector<int>& citations) {
        if(citations.empty() || citations.back() == 0) return 0;
        int n = citations.size();
        int left = 0, right = n - 1;
        while(left < right){
            int mid = (left + right)/2;
            if(citations[mid] >= n - mid ) right = mid;
            else left = mid + 1;
        }
        return n - left;
    }
};