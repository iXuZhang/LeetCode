class Solution:
    # @param {string} s
    # @return {integer}
    def romanToInt(self, s):
        dic = {'I':1,'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000}
        res = 0
        l = len(s)
        for i in range(l):
            if i!= l-1 and dic[s[i+1]] > dic[s[i]]:
                res -= dic[s[i]]
            else:
                res += dic[s[i]]
        return res
                