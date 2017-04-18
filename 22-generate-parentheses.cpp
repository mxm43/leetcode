class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> ret;

        string s;
        recursion(ret, s, 0, n, n);

        return ret;
    }

private:
    void recursion(vector<string> &ret, string s, int c, int open, int close)
    {
        if (c < 0) return;
        if (open == 0 && close == 0)
        {
            ret.push_back(s);
            return;
        }

        if (open  > 0)
            recursion(ret, s+"(", c+1, open-1, close);
        if (close > 0)
            recursion(ret, s+")", c-1, open, close-1);
    }
};

