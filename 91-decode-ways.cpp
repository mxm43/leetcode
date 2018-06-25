class Solution
{
private:
    int dp(string &s, int i, vector<int> &v)
    {
        if (v[i] != -1)
            return v[i];

        if (i < s.length() && s[i] == '0')
            return (v[i] = 0);
        else if (i >= s.length()-1)
            return (v[i] = 1);

        v[i] = dp(s, i+1, v) +
            ((s[i]<'2' || (s[i]=='2' && s[i+1]<='6')) ? dp(s, i+2, v) : 0);

        return v[i];
    }

public:
    int numDecodings(string s)
    {
        vector<int> v(s.length()+1, -1);

        v[s.length()] = 1;

        return dp(s, 0, v);
    }
};

