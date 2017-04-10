class Solution
{
public:
    double myPow(double x, int n)
    {
        bool neg = n<0 ? true : false;
        double ret = 1;

        if (neg)
        {
            if (n == INT_MIN)
            {
                ret = x;
                ++n;
            }
            n = -n;
        }

        for (; n; n >>= 1, x *= x)
            if (n & 1)
                ret *= x;
        if (neg) ret = 1/ret;

        return ret;
    }
};

