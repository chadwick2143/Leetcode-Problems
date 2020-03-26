class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        size_h = len(haystack)
        size_n = len(needle)
        if size_n == 0:
            return 0
        elif size_n > size_h:
            return -1
        
        for i in range(size_h-size_n+1):
            if haystack[i:i+size_n] == needle:
                return i
        
        return -1
