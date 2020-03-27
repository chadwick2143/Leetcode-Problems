class Solution {
public:
    string countAndSay(int n) {
        string ret = "1";
        while (--n > 0)
        {
            string tmp = "";
            int nCnt = 1;
            char cur = ret[0];
            size_t nSize = ret.size();
            for (size_t i = 1; i < nSize; ++i)
            {
                if (cur == ret[i])
                {
                    ++nCnt;
                }
                else
                {
                    tmp += nCnt + '0';
                    nCnt = 1;
                    tmp += cur;
                    cur = ret[i];
                }
            }
            tmp += nCnt + '0';
            tmp += cur;

            ret = tmp;
        }

        return ret;
    }
};