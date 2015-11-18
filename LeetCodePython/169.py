class Solution:
    # @param {integer[]} nums
    # @return {integer}
    """ Version 1 First Try
    def majorityElement(self, nums):
        n = len(nums)/2
        dic = {}
        for i in nums:
            if i not in dic:
                dic[i] = 0
            dic[i] += 1
            if dic[i] > n:
                return i
        return 0
    """
    # Version 2 Concise
    def majorityElement(self, nums):
        return sorted(nums)[len(nums) / 2]
    