class Solution:
    # @param {string} s
    # @return {integer}
    """ Version1    
    def titleToNumber(self, s):
        dic = {}
        ans = 0
        k = 0
        for i in s[::-1]:
            if i not in dic:
                dic[i] = ord(i) - 64
            ans += dic[i]*26**k
            k += 1
        return ans
    """
    """ Version 2
    def titleToNumber(self, s):
        dic = {}
        l = len(s)
        ans = 0
        for i in range(l):
            if s[i] not in dic:
                dic[s[i]] = ord(s[i]) - 64
            ans += dic[s[i]] * 26 ** (l - i - 1)
        return ans
    """
    """ Version 3
    def titleToNumber(self, s):
        return sum([(ord(s[i]) - 64)* 26 ** (len(s) - i - 1) for i in range(len(s)) ])    
    """
    # Version F Awesome!
    def titleToNumber(self, s):
        return reduce(lambda x,y : x*26 + ord(y) - 64, s, 0)
