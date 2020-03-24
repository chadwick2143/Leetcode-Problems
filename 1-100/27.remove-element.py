class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        if not nums:
            return 0
        
        ret = 0
        for x in nums:
            if x != val:
                nums[ret] = x
                ret += 1
        
        return ret
