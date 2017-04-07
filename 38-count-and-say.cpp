class Solution
{
public:
    string countAndSay(int n)
    {
        string ret = "1";

        while (--n > 0)
        {
            string tmp;
            int count = 1;
            char num  = ret[0];
            for (int i = 1; i <= ret.size(); ++i)
            {
                if (num == ret[i])
                    ++count;
                else
                {
                    tmp = tmp + to_string(count) + num;
                    count = 1;
                    num = ret[i];
                }
            }
            ret = tmp;
        }

        return ret;
    }
};

