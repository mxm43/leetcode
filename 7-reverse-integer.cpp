class Solution
{
public:
    int reverse(int x)
    {
        int max = ~0 & ~(1 << 31), min = (1 << 31);
        long ret = 0;

        int tmp = x;
        while (tmp != 0)
        {
            ret = ret*10 + tmp%10;
            tmp /= 10;
        }
        if (ret > max || ret < min)
            return 0;
        else
            return ret >= 0 ? (int)ret : (int)ret | (1 << 31);
    }
};

