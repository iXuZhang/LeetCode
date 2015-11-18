class Solution:
    # @param {integer} n
    # @return {integer}
    def trailingZeroes(self, n):
        ans = 0
        q = n/5
        while q:
            ans += q
            q /= 5
        return ans