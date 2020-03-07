class Solution:
    def romanToInt(self, s: str) -> int:
        ret = 0
        numDict = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        preNum = 0
        curNum = 0
        for c in s:
            curNum = numDict.get(c, 0)
            if preNum < curNum:
                ret -= preNum
            else:
                ret += preNum
            preNum = curNum
        ret += preNum

        return ret
