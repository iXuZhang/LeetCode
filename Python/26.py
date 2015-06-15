class Solution:
    # @param {integer[]} nums
    # @return {integer}
    
    """ Vesion 1 slow copy and set
    def removeDuplicates(self, nums):
        check = set()
        copy = nums[:]
        for i in copy:
            if i not in check:
                check.add(i)
            else:
                nums.remove(i)
        return len(check)
    """
    
    """ Version2 Slow set
    def removeDuplicates(self, nums):
        check = set()
        n =0
        l = len(nums)
        for i in range(l):
            if nums[i-n] not in check:
                check.add(nums[i-n])
            else:
                nums.remove(nums[i-n])
                n += 1
        return l-n
    """
    
    """ Version3 Slow two pointers
    def removeDuplicates(self, nums):
        curr = 1
        prev = 0
        n = 0
        l = len(nums)
        if l == 0 or l == 1:
            return l
        while l-curr-n:
            if nums[curr] == nums[prev]:
                nums.remove(nums[curr])
                n += 1
            else:
                prev += 1
                curr += 1
        return curr
    """
    
    """Version4 faster with del instead of remove()
    def removeDuplicates(self, nums):
        check = set()
        n =0
        l = len(nums)
        for i in range(l):
            if nums[i-n] not in check:
                check.add(nums[i-n])
            else:
                del nums[i-n]
                n += 1
        return l-n
    """
    
    """ Version5 Read Question again
    def removeDuplicates(self, nums):
        curr = 1
        prev = 0
        l = len(nums)
        if l == 0 or l == 1:
            return l
        while l-curr:
            if nums[curr] != nums[prev]:
                prev += 1
                nums[prev] = nums[curr]
            curr += 1
        return prev+1
    """
    
    # Versin 6
    def removeDuplicates(self, nums):
        if not nums:
            return 0
        key = 0
        for i in range(1,len(nums)):
            if nums[i] != nums[key]:
                key += 1
                nums[key] = nums[i]
        return key+1