class Solution:
    # @param {string[]} strs
    # @return {string}
    
    #Version1
    def longestCommonPrefix(self, strs):
        if not strs:
            return ""
        com = strs[0]
        for i in strs:
            com = com[:min(len(i),len(com))]    
            for k in range(len(com)):
                if com[k] != i[k]:
                    com = com[:k]
                    break
        return com


    """ Version 2 form others
    def longestCommonPrefix(self, strs):
        if not strs:
            return ''
        str = strs[0]
        res = ''
        for i in range(len(str)):
            for j in range(1,len(strs)):
                if i > len(strs[j]) - 1:
                    return res
                if str[i] != strs[j][i]:
                    return res
            res += str[i]
        return res
    """