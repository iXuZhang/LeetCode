class Solution:
    # @param {string} s
    # @return {integer}
    """Version1
    def lengthOfLastWord(self, s):
        length = 0
        mark = True
        for i in s:
            if i != ' ':
                if mark:
                    length += 1
                else:
                    length = 1
                    mark = True
            else:
                mark = False
        return length
    """
    
    #Version2 Think twice
    def lengthOfLastWord(self, s):
        length = 0
        l = len(s)
        i = -1
        while i!= -l-1:
            if s[i] != ' ':
                length += 1
            if s[i] == ' ' and length:
                break
            i -= 1
        return length