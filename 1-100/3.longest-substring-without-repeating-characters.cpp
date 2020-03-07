class Solution {
public:
    int lengthOfLongestSubstring(const string& s) {
        unordered_map<char, int> mapChrIdx;
        int nMaxLen = 0;
        int nChrBeg = -1;
        int nChrIdx = 0;
        for (const char& c : s)
        {
            if (mapChrIdx.count(c) == 1 && mapChrIdx[c] > nChrBeg)
            {
                nChrBeg = mapChrIdx[c];
            }
            else if (nChrIdx - nChrBeg > nMaxLen)
            {
                nMaxLen = nChrIdx - nChrBeg;
            }
            mapChrIdx[c] = nChrIdx;
            ++nChrIdx;
        }

        return nMaxLen;
    }
};