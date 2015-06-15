class Solution:
    # @param {integer[]} digits
    # @return {integer[]}
    def plusOne(self, digits):
        if digits[-1] == 9 and len(digits) == 1:
            return [1,0]
        if digits[-1] == 9:
            return self.plusOne(digits[:-1])+[0]
        digits[-1] += 1
        return digits