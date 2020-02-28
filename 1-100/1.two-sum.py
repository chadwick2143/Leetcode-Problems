class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dictIndex = {}
        for i in range(len(nums)):
            n = target - nums[i]
            if n in dictIndex:
                return [dictIndex[n], i]
            dictIndex[nums[i]] = i
        
        return [-1, -1]
