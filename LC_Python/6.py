class Solution:
    # @param {string} s
    # @param {integer} numRows
    # @return {string}
    def convert(self, s, numRows):
        ans = ""
        pointer = 0
        dic = {}
        direct = 1
        if numRows == 1:
            return s
        for i in s:
            pointer += direct
            if pointer not in dic:
                dic[pointer] = ""
            dic[pointer] += i
            if (pointer == numRows and direct > 0) or (pointer == 1 and direct < 0):
              direct = -direct
        for key in dic:
            ans += dic[key]
        return ans