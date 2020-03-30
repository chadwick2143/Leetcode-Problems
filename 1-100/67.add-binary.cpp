class Solution {
public:
    string addBinary(string& a, string& b) {
        string& maxStr = a.size() > b.size() ? a : b;
        string& minStr = a.size() > b.size() ? b : a;
        char nCarry = 0;
        for (auto itrMax = maxStr.rbegin(), itrMin = minStr.rbegin(); 
            itrMax != maxStr.rend(); ++itrMax)
        {
            char nMin = itrMin != minStr.rend() ? *itrMin++ - '0' : 0;
            char nSum = *itrMax - '0' + nMin + nCarry;
            if (nSum >= 2)
            {
                *itrMax = nSum - 2 + '0';
                nCarry = 1;
            }
            else
            {
                *itrMax = nSum + '0';
                nCarry = 0;
            }
        }

        if (nCarry == 1)
        {
            maxStr.insert(maxStr.begin(), '1');
        }

        return maxStr;
    }
};