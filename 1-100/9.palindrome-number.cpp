class Solution {
public:
    bool isPalindrome(int x) {
        if (x == 0)
        {
            return true;
        }
        
        if (x < 0 || x % 10 == 0)
        {
            return false;
        }

        int nReverse = 0;
        while (x > nReverse)
        {
            nReverse = nReverse * 10 + x % 10;
            x /= 10;
        }

        return x == nReverse || x == nReverse / 10;
    }
};