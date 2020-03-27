class Solution:
    def countAndSay(self, n: int) -> str:
        ret = '1'
        for _ in range(n-1):
            tmp = ''
            cur = ret[0]
            nCnt = 1
            for c in ret[1:]:
                if cur == c:
                    nCnt += 1
                else:
                    tmp += str(nCnt) + cur
                    nCnt = 1
                    cur = c
            tmp += str(nCnt) + cur

            ret = tmp
        
        return ret
