class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.empty())
        {
            return 0;
        }

        int curSum = nums[0];
        int maxSum = curSum;
        size_t nSize = nums.size();
        for (size_t i = 1; i < nSize; ++i)
        {
            curSum = curSum > 0 ? curSum + nums[i] : nums[i];
            maxSum = maxSum > curSum ? maxSum : curSum;
        }

        return maxSum;
    }
};