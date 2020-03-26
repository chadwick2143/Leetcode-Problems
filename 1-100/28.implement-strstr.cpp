class Solution {
public:
    int strStr(string haystack, string needle) {
        int size_h = haystack.size();
        int size_n = needle.size();
        if (size_n == 0)
        {
            return 0;
        }
        else if (size_n > size_h)
        {
            return -1;
        }

        for (int i = 0; i < size_h - size_n + 1; ++i)
        {
            bool bFlag = true;
            for (int j = 0; j < size_n; ++j)
            {
                if (haystack[i + j] != needle[j])
                {
                    bFlag = false;
                    break;
                }
            }

            if (bFlag)
            {
                return i;
            }
        }

        return -1;
    }
};