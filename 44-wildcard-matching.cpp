class Solution
{
public:
    bool isMatch(string s, string p)
    {
        int m = s.size(), n = p.size();
        bool dp[m+1][n+1] = {{false}};

        dp[0][0] = true;
        for (int i = 0; i < m+1; ++i)
        {
            for (int j = 1; j < n+1; ++j)
            {
                if (p[j-1] == '*')
                    dp[i][j] = (i>0 ? dp[i-1][j] : false) || dp[i][j-1];
                else if(p[j-1] == '?' || s[i-1] == p[j-1])
                    dp[i][j] = i>0 ? dp[i-1][j-1] : false;
                else
                    dp[i][j] = false;
            }
        }

        return dp[m][n];
    }
};

