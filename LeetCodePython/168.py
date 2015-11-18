class Solution:
    # @param {integer} n
    # @return {string}
    """ Version First
    def convertToTitle(self, n):
        s = ""
        while n:
            n -= 1
            s = chr(n % 26 +65) + s
            n /= 26
        return s
    """
    # Concise
    def convertToTitle(self, n):
        return self.convertToTitle( (n-1)/26) + chr((n-1) % 26 +65) if n >0 else ""
    