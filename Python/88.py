class Solution:
    # @param {integer[]} nums1
    # @param {integer} m
    # @param {integer[]} nums2
    # @param {integer} n
    # @return {void} Do not return anything, modify nums1 in-place instead.
    
    """ Version1 Copy nums3
    def merge(self, nums1, m, nums2, n):
        nums3 = nums1[:]
        k = i = j = 0
        while i < m and j < n:
            if nums3[i] < nums2[j]:
                nums1[k] = nums3[i]
                i += 1
            else:
                nums1[k] = nums2[j]
                j += 1
            k += 1
        while i < m: 
            nums1[k] = nums3[i] 
            i += 1
            k += 1
        while j < n:
            nums1[k] = nums2[j]
            j += 1
            k += 1
    """
    
    
    # Version2 Better from end to start Awesome!!
    def merge(self, nums1, m, nums2, n):
        k, i, j = m+n-1, m-1, n-1
        while j >= 0:
            if i>=0 and nums1[i] > nums2[j]:
                nums1[k] = nums1[i]
                i -= 1
            else:
                nums1[k] = nums2[j]
                j -= 1
            k -= 1