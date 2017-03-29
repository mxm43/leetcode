class Solution
{
public:
    string intToRoman(int num)
    {
        string r = "IVXLCDM";
        string ret;

        int p = r.size()-1;
        int d = 1000;

        while (d != 0)
        {
            int c = num / d;
            if (c > 0 && c <= 3)
                for (int i = 0; i < c; ++i) ret += r[p];
            else if (c == 4)
                ret = ret+r[p]+r[p+1];
            else if (c >= 5 && c <= 8)
            {
                ret += r[p+1];
                for (int i = 0; i < c-5; ++i) ret += r[p];
            }
            else if (c == 9)
                ret = ret+r[p]+r[p+2];

            num -= d*c;
            d   /= 10;
            p   -= 2;
        }

        return ret;
    }
};
