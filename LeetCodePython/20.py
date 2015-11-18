class Solution:
    # @param {string} s
    # @return {boolean}
    def isValid(self, s):
        stack = []
        dic = {')':'(',']':'[','}':'{'}
        for i in s:
            if i in ('(', '[', '{'):
                stack.append(i)
            else:
                if stack and dic[i] == stack[-1]:
                    del stack[-1]
                else:
                    return False
        return True if not stack else False
                