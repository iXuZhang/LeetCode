// Median of Two Sorted Arrays
class Solution {
public:
    // O(log(min(m,n)))
    // nums1 0 ... i-1      i ... m-1;
    // nums2 0 ... j-1      j ... n-1;
    // condition 1 nums1[i-1] < nums2[j] && nums1[j-1] < nums2[i]
    // condition 2 i + j = m + n

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        const int m = nums1.size();
        const int n = nums2.size();
        if(m > n) return findMedianSortedArrays(nums2, nums1);
        int half = (m + n)/2; // when single, return B
        int left = 0;
        int right = m;
        while(left <= right){ // i can be 0 - m
            int i = (left + right)/2;
            int j = half - i;
            if (i<m && j>0 && nums2[j-1] > nums1[i]) left = i + 1;
            else if (i>0 && j<n && nums2[j] < nums1[i-1]) right = i - 1;
            else{
                int A, B;
                if(i == 0) A = nums2[j-1];
                else if (j == 0) A = nums1[i - 1];
                else A = max(nums1[i-1], nums2[j-1]);
                if(i == m) B = nums2[j];
                else if(j == n) B = nums1[i];
                else B = min(nums1[i], nums2[j]);
                if((m+n)&1) return B;
                return (A + B)/2.0;
            }
        }
    }
    
    /* O(log(m+n) reduce a half
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        const int m = nums1.size();
        const int n = nums2.size();
        int i1 = 0, i2 = 0, j1 = m - 1, j2 = n - 1; 
        while(i1 <= j1 && i2 <= j2){
            int l1 = j1 - i1 + 1;
            int l2 = j2 - i2 + 1;
            if(l1 + l2 <= 2) break;
            int cut = max(min(min(l1,l2),(l1 + l2)/4), 1);
            if(nums1[i1+cut-1] < nums2[i2+cut-1]) i1 += cut;
            else i2 += cut;
            if(nums1[j1-cut+1] > nums2[j2-cut+1]) j1 -= cut;
            else j2 -= cut;
        }
        if(i1 == j1 && i2 == j2) return (nums1[i1] + nums2[i2])/2.0;
        return i1 <= j1 ? (nums1[(i1 + j1)/2] + nums1[(i1 + j1 + 1)/2])/2.0 : (nums2[(i2 + j2)/2] + nums2[(i2 + j2 + 1)/2])/2.0;
    }
    */
};