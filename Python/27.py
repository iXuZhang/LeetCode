class Solution:
    # @param {integer[]} nums
    # @param {integer} val
    # @return {integer}
    """ Version1 Del
    def removeElement(self, nums, val):
        n = 0
        for i in range(len(nums)):
            if nums[i-n] == val:
               del nums[i-n]
               n += 1
        return len(nums)
    """
    
    #Version2 two pointers
    def removeElement(self, nums, val):
        k = 0
        for i in range(len(nums)):
            if nums[i] != val:
                nums[k] = nums[i]
                k += 1
        return k