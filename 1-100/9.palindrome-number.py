class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        
        nOrigin = x
        nReverse = 0
        while nOrigin != 0:
            nReverse = nReverse * 10 + nOrigin % 10
            nOrigin //= 10
        
        return x == nReverse
