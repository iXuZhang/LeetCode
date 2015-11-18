class Solution:
    # @param {integer} n
    # @return {integer}

    def countPrimes(self, n):
        if n < 3:
            return 0
        count =[0,0]+[1]*(n-2)
        i = 0
        n = int(math.sqrt(n))+1
        for i in range(2,n):
            if count[i] == 1:
                k = i
                while k*i < n:
                    count[k*i]=0
                    k+=1
        return sum(count)