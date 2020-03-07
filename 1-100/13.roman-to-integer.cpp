class Solution {
public:
    int romanToInt(const string& s) {
        int ret = 0;
        int preNum = 0;
        int curNum = 0;
        for (const auto& c : s)
        {
            curNum = GetRomanCharInt(c);
            if (preNum < curNum)
            {
                ret -= preNum;
            }
            else
            {
                ret += preNum;
            }
            preNum = curNum;
        }
        ret += preNum;

        return ret;
    }

    int GetRomanCharInt(const char c)
    {
        switch (c)
        {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
        }
    }
};