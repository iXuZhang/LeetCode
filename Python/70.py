class Solution:
    # @param {integer} n
    # @return {integer}
    """ Version 1
    def climbStairs(self, n):
        res = [0,1,2] + [0]*(n-2)
        for i in range(3,n+1):
            res[i] = res[i-2] + res[i-1]
        return res[n]
    """ 
    
    #Version 2
    def climbStairs(self, n):
        if n < 4:
            return n
        pprev = 2
        prev = 3
        for i in range(n-3):
            curr = pprev + prev
            pprev = prev
            prev = curr
        return curr
