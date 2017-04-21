class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        if (divisor==0 || (dividend==INT_MIN && divisor==-1))
            return INT_MAX;

        bool neg = ((dividend^divisor)>>31) ? true : false;
        int r = 0, c = 0;

        if (dividend > 0)
            dividend = -dividend;
        if (divisor  > 0)
            divisor  = -divisor;

        while (divisor & 1<<30 && dividend<divisor)
            ++c, divisor <<= 1;
        for (; c >= 0; --c, divisor >>= 1)
        {
            if (dividend <= divisor)
            {
                dividend -= divisor;
                r += 1 << c;
            }
        }

        return neg ? -r : r;
    }
};

