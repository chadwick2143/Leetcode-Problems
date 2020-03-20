class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
        {
            return "";
        }
        if (strs.size() == 1)
        {
            return strs[0];
        }
        string ret = "";
        auto min_max = minmax_element(strs.begin(), strs.end());
        size_t nSize = min_max.first->size();
        for (size_t i = 0; i < nSize; ++i)
        {
            if (min_max.first->at(i) != min_max.second->at(i))
            {
                break;
            }
            ret += min_max.first->at(i);
        }

        return ret;
    }
};