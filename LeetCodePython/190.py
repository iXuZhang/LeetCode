class Solution:
    # @param n, an integer
    # @return an integer
    def reverseBits(self, n):
        return int(str(bin(n))[:1:-1]+'0'*(32-len(str(bin(n))[2:])),2)
        #return int(bin(n)[:1:-1].ljust(32,'0'), base = 2)