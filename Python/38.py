class Solution:
    # @param {integer} n
    # @return {string}
    def countAndSay(self, n):
        if not n:
            return ""
        curr = "1"
        for i in range(1,n):
            prev = curr
            curr = ""
            count = 1
            for k in range(1,len(prev)):
                if prev[k] != prev[k-1]:
                    curr += (str(count)+prev[k-1])
                    count = 0
                count += 1
            curr += (str(count)+prev[-1])
        return curr
            