class Solution:
    # @param {integer[]} nums
    # @param {integer} target
    # @return {integer[]}
    def twoSum(self, nums, target):
        dic = {}
        for i in range(len(nums)):
            if nums[i] in dic:
                return [ dic[nums[i]], i+1]
            else:
                dic[target - nums[i]] = i+1