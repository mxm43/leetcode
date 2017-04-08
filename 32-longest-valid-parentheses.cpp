#define MAX(a, b) ((a) > (b) ? (a) : (b))

class Solution
{
public:
    int longestValidParentheses(string s)
    {
        vector<int> c(s.size());
        int max = 0;

        for (int i = 1; i < s.size(); ++i)
        {
            if (i-c[i-1]-1>=0 && s[i]==')' && s[i-c[i-1]-1]=='(')
                c[i] = c[i-1] + (i-c[i-1]-2>0 ? c[i-c[i-1]-2] : 0) + 2;
            else
                c[i] = 0;

            max = MAX(max, c[i]);
        }

        return max;
    }
};

