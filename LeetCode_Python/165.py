class Solution:
    # @param {string} version1
    # @param {string} version2
    # @return {integer}
    """ Verision First
    def compareVersion(self, version1, version2):
        point1 = version1.find(".")
        point2 = version2.find(".")
        if version1 == version2:
            return 0
        if point1 == -1:
            v1 = int(version1)
            v11 = "0"
        else:
            v1 = int(version1[0:point1])
            v11 = version1[point1+1:]
        if point2 == -1:
            v2 = int(version2)
            v22 = "0"
        else:
            v2 = int(version2[0:point2])
            v22 = version2[point2+1:]   
        ans = cmp(v1,v2) 
        return ans if ans else self.compareVersion(v11, v22)
    """
    
    def compareVersion(self, version1, version2):    
        if version1 == version2:
            return 0
        v1 = version1.split(".",1)
        v2 = version2.split(".",1)
        ans = cmp(int(v1[0]),int(v2[0]))
        v1.append("0")
        v2.append("0")
        return ans if ans else self.compareVersion(v1[1],v2[1])
        
        
    