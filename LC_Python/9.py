class Solution:
    # @param {integer} x
    # @return {boolean}
    def isPalindrome(self, x):
        if x < 0:
            return False
        s = str(x)
        length = len(s)
        for i in range(length/2):
            if s[i] != s[length-1-i]:
                return False
        return True