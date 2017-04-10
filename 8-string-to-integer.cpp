class Solution
{
public:
    int myAtoi(string str)
    {
        if (str.size() == 0) return 0;

        int  i = 0;
        while (i<str.size() && isspace(str[i])) ++i;
        if (i >= str.size()) return 0;

        bool neg = str[i]=='-' ? true : false;
        long ret = 0;

        if    (str[i]=='+' || str[i]=='-')  ++i;
        for (; i < str.size() && isdigit (str[i]); ++i)
        {
            int d = str[i]-'0';
            if (neg == true)
            {
                ret = ret*10 - d;
                if (ret < INT_MIN)
                    return INT_MIN;
            }
            else
            {
                ret = ret*10 + d;
                if (ret > INT_MAX)
                    return INT_MAX;
            }
        }

        return ret;
    }
};

