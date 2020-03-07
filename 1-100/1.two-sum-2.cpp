class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mapIndex;
        for (int i = 0; i < nums.size(); ++i)
        {
            int n = target - nums[i];
            if (mapIndex.count(n) == 1)
            {
                return { mapIndex[n], i };
            }
            mapIndex[nums[i]] = i;
        }

        return { -1, -1 };
    }
};