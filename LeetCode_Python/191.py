class Solution:
    # @param n, an integer
    # @return an integer
    def hammingWeight(self, n):
        return sum([int(x) for x in str(bin(n))[2:]])