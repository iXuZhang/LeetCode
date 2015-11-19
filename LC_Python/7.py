class Solution:
    # @param {integer} x
    # @return {integer}
    def reverse(self, x):
        if x < 0:
            x = -int(str(-x)[::-1])
        else:
            x= int(str(x)[::-1])
        if -2 ** 31 <x< 2 **31 -1:
            return x
        return 0
        
    """
    while x:
            result = result * 10 + x % 10
            x /= 10
    """