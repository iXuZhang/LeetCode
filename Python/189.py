class Solution:
    # @param {integer[]} nums
    # @param {integer} k
    # @return {void} Do not return anything, modify nums in-place instead.
    
    """ Version 1
    def rotate(self, nums, k):
        k = k%len(nums)
        while k > 0:
            nums.insert(0, nums.pop())
            k -= 1
    """

    # Version 2
    def rotate(self, nums, k):
        k = k%len(nums)
        if k:
            k = len(nums) - k
            nums.extend(nums[:k])
            del nums[:k]
    