class Solution:
    # @param {string} str
    # @return {integer}
    def myAtoi(self, str):
        num = 0
        for i in range(len(str)):
            if str[i] != " ":
                if str[i] == "-":
                    symbol = -1
                    str = str[i+1:]
                elif str[i] == "+":
                    symbol = 1
                    str = str[i+1:]
                elif str[i] in set("0123456789"):
                    symbol = 1
                    str = str[i:]
                else:
                    return 0
                break
        for i in range(len(str)):
            if str[i] not in set("0123456789"):
                if not i:
                    return 0
                str = str[:i]
                break
        if not str:
            return 0
        num = symbol*int(str)
        if num > 2**31 -1:
            return 2**31 -1
        elif num < -2**31:
            return -2**31
        else:
            return num