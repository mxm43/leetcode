class Solution
{
public:
    string multiply(string num1, string num2)
    {
        int n1 = num1.size(), n2 = num2.size();
        vector<int> r(n1+n2, 0);

        for (int i = 0; i < n1; ++i)
        {
            int c = 0;
            for (int j = 0; j < n2; ++j)
            {
                r[i+j] += (num1[n1-1-i]-'0')*(num2[n2-1-j]-'0')+c;
                c = r[i+j]/10;
                r[i+j] %= 10;
            }

            if (c != 0)
                r[i+n2] += c;
        }

        int n = n1+n2-1;
        while (r[n] == 0 && n > 0) --n;

        string ret;
        while (n >= 0) ret += (r[n--]+'0');

        return ret;
    }
};

