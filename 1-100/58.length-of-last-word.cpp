class Solution {
public:
    int lengthOfLastWord(string s) {
        int ret = 0;
        bool bFlag = true;

        for (auto itr = s.rbegin(); itr != s.rend(); ++itr)
        {
            char c = *itr;
            if (c == ' ')
            {
                if (bFlag)
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
            else
            {
                bFlag = false;
                ++ret;
            }
        }

        return ret;
    }
};