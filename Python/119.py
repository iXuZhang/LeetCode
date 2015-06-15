class Solution:
    # @param {integer} rowIndex
    # @return {integer[]}
    """ Version 1
    def getRow(self, rowIndex):
        curr = [1]
        for i in range(1,rowIndex+1):
            prev = curr
            curr = [1]
            for j in range(1, i):
                curr.append(prev[j-1] + prev[j])
            curr.append(1)
        return curr
    """
    # Version2
    def getRow(self, rowIndex):
        curr = [1]
        for i in range(1, rowIndex+1):
            curr.append(curr[-1]*(rowIndex+1-i)/i)
        return curr
        