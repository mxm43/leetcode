class Solution {
public:
    int climbStairs(int n)
    {
        int c1 = 1, c2 = 2;

        if (n < 3)
            return n;

        for (int i = 3; i <= n; ++i)
        {
            int tmp = c1 + c2;
            c1 = c2;
            c2 = tmp;
        }

        return c2;
    }
};

