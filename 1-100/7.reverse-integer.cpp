class Solution {
public:
    int reverse(int x) {
        unsigned int nRet = 0;
        unsigned int nRes = 0;
        unsigned int nAbs = x;
        bool bIsPositive = true;
        if (x < 0)
        {
            nAbs = ~nAbs + 1;
            bIsPositive = false;
        }

        while (nAbs != 0)
        {
            nRes = nAbs % 10;
            if ((bIsPositive && nRet > (0x7fffffff - nRes) / 10) ||
                (!bIsPositive && nRet > (0x80000000 - nRes) / 10))
            {
                nRet = 0;
                break;
            }

            nRet = nRet * 10 + nRes;
            nAbs /= 10;
        }

        return bIsPositive ? nRet : ~nRet + 1;
    }
};