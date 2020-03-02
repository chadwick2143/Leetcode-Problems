class Solution:
    def reverse(self, x: int) -> int:
        bIsPositive = True
        if x < 0:
            bIsPositive = False
        ret = int(str(x)[::-1]) if bIsPositive else int('-' + str(-x)[::-1])
        if -pow(2, 31) <= ret < pow(2, 31):
            return ret
        else:
            return 0
