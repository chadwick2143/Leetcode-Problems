class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        chr2idx = {}
        nMaxLen = 0
        nChrBeg = -1

        for idx, c in enumerate(s):
            if c in chr2idx and nChrBeg < chr2idx[c]:
                nChrBeg = chr2idx[c]
            elif idx - nChrBeg > nMaxLen:
                nMaxLen = idx - nChrBeg
            chr2idx[c] = idx

        return nMaxLen
