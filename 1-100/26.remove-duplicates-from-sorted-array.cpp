class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int lastIdx = nums.size();
        if (lastIdx < 2)
        {
            return lastIdx;
        }

        int retIdx = 0;
        int firstIdx = 0;
        while (++firstIdx != lastIdx)
        {
            if (nums[retIdx] != nums[firstIdx])
            {
                nums[++retIdx] = nums[firstIdx];
            }
        }

        return ++retIdx;
    }
};