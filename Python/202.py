class Solution:
    # @param {integer} n
    # @return {boolean}
    
    """  @ Mine  
    def isHappy(self, n):
        ans = []
        while n not in ans:
            if n == 1:
                return True
            ans.append(n)
            m = str(n)
            n = 0
            for i in m:
                n += int(i) ** 2
        return False
    """
    
    def isHappy(self, n):
        m = n
        mem = set()
        while m not in mem:
            mem.add(m)
            # sum() + List comprehension + str()     Awesome!!!
            m = sum([int(x) ** 2 for x in str(m)])
            if m == 1:
                return True
        return False
    