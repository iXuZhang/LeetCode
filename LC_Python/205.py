class Solution:
    # @param {string} s
    # @param {string} t
    # @return {boolean}
    def isIsomorphic(self, s, t):
        dict = {}
        for i in range(len(s)):
            if s[i] not in dict:
                if t[i] in dict.values():
                  return False  
                dict[s[i]] = t[i]
            if dict[s[i]] != t[i]:
                return False
        return True