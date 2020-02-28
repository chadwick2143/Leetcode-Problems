class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (auto itr = nums.begin(); itr != nums.end(); ++itr)
        {
            int n = target - *itr;
            auto itrFind = find(itr + 1, nums.end(), n);
            if (itrFind != nums.end())
            {
                int nIdx1 = itr - nums.begin();
                int nIdx2 = itrFind - nums.begin();
                return { nIdx1, nIdx2 };
            }
        }

        return { -1, -1 };
    }
};