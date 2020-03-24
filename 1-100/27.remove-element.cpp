class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.empty())
        {
            return 0;
        }

        int retIdx = 0;
        for (const auto& x : nums)
        {
            if (x != val)
            {
                nums[retIdx] = x;
                ++retIdx;
            }
        }

        return retIdx;
    }
};