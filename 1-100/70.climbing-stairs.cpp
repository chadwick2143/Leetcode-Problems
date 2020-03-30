class Solution {
public:
    int climbStairs(int n) {
        int a = 0, b = 1;
        while (--n >= 0)
        {
            b = a + b;
            a = b - a;
        }

        return b;
    }
};