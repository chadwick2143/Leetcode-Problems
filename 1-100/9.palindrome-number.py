class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x == 0:
            return True

        if x < 0 or x % 10 == 0:
            return False
        
        nReverse = 0
        while x > nReverse:
            nReverse = nReverse * 10 + x % 10
            x //= 10
        
        return x == nReverse or x == nReverse // 10
