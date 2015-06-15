class Solution:
    # @param {integer[]} nums
    # @return {integer}
    """ Version 1.0 First try
    def rob(self, nums):
        if not nums:
            return 0
        elif len(nums) < 3:
            return max(nums)
        elif len(nums) == 3:
            return max(nums[1],nums[0]+nums[2])
        dict_m = {0:nums[0],1:nums[1],2:nums[0]+nums[2]}
        m = 0
        for i in range(len(nums))c
            m = max(dict_m[i-3] + nums[i], dict_m[i-2] + nums[i], dict_m[i-1])
            if i not in dict_m:
                dict_m[i] = m
        return m
    """ 
    """ Version 2.0 list but dict, structure！dict_m[i-2] + nums[i] >= dict_m[i-3] + nums[i]
    def rob(self, nums):
        length = len(nums)
        if length == 0:
            return 0
        elif length <3:
            return max(nums)
        m = [nums[0]]
        m.append(max(nums[0],nums[1]))
        for i in range(length)[2:]:
            m.append(max(m[i-2] + nums[i], m[i-1]))
        return m[-1]
    """
    # Version 3.0 Awesome!
    def rob(self, num):
        left = left_left = 0
        for i in xrange(len(num)):
            left, left_left =  max(num[i] + left_left, left), left
        return left
    