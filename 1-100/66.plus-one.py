class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        nCarry = 1
        nIdx = len(digits) - 1
        while nIdx >= 0:
            digits[nIdx] += 1
            if digits[nIdx] > 9:
                digits[nIdx] -= 10
                nIdx -= 1
            else:
                return digits
        
        digits.insert(0, 1)

        return digits
