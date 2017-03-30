class Solution
{
public:
    int romanToInt(string s)
    {
        int ret = 0;

        for (int i = s.size()-1, l = 0; i >= 0; --i)
        {
            int v = 0;
            switch (s[i])
            {
                case 'I': v =    1; break;
                case 'V': v =    5; break;
                case 'X': v =   10; break;
                case 'L': v =   50; break;
                case 'C': v =  100; break;
                case 'D': v =  500; break;
                case 'M': v = 1000; break;
            }

            if (v < l)
                ret -= v;
            else
                ret += v;

            l = v;
        }

        return ret;
    }
};

