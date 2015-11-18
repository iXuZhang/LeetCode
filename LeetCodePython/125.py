class Solution:
    # @param {string} s
    # @return {boolean}
    
    """ Version 1
    def isPalindrome(self, s):
        l = filter( lambda x: x in "abcdefghijklmnopqrstuvwxyz1234567890", s.lower())
        for i in range(len(l)/2):
            if l[i] != l[-1-i]:
                return False
        return True
    """
    
    
    # Regular Expression
    def isPalindrome(self, s):
        #s = re.sub("[^A-Za-z0-9]", "", s).lower()
        s = re.sub("\W", "", s).lower()
        return s == s[::-1]