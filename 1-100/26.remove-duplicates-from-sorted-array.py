class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        nLen = len(nums)
        if nLen < 2:
            return nLen
        
        ret = 0
        for x in nums[1:]:
            if nums[ret] != x:
                ret += 1
                nums[ret] = x
        
        return ret + 1
