class Solution:
    # @param {integer} numRows
    # @return {integer[][]}
    """Version 1
    def generate(self, numRows):
        if not numRows:
            return []
        pt = [[1]]
        for i in range(numRows)[1:]:
            pt.append([1])
            for j in range(i+1)[1:i]:
                pt[i].append(pt[i-1][j-1] + pt[i-1][j])
            pt[i].append(1)
        return pt
    """
    
    def generate(self, numRows):
        pt = []
        for i in range(numRows):
             curr = [1] if i else []
             for j in range(1,i):
                 curr.append(pt[-1][j-1] + pt[-1][j])
             curr.append(1)
             pt.append(curr)
        return pt