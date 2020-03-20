class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        ret = ''
        for x in zip(*strs):
            if len(set(x)) == 1:
                ret += x[0]
            else:
                break
        
        return ret
