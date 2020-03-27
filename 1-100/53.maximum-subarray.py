class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        if not nums:
            return 0
        
        curSum = nums[0]
        maxSum = curSum
        for num in nums[1:]:
            curSum = curSum + num if curSum > 0 else num
            maxSum = maxSum if maxSum > curSum else curSum
        
        return maxSum
