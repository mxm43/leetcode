class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        string s;
        dfs (s, digits, 0);

        return ret;
    }

private:
    vector< vector<char> > m =
    {
        vector<char>{},
        vector<char>{},
        vector<char>{'a','b','c'},
        vector<char>{'d','e','f'},
        vector<char>{'g','h','i'},
        vector<char>{'j','k','l'},
        vector<char>{'m','n','o'},
        vector<char>{'p','q','r','s'},
        vector<char>{'t','u','v'},
        vector<char>{'w','x','y','z'},
    };

    vector<string> ret;

    void dfs(string &s, string &d, int pos)
    {
        if (pos >= d.size())
        {
            if (!s.empty())
                ret.push_back(s);
            return;
        }

        for (auto c : m[d[pos]-'0'])
        {
            s.push_back(c);
            dfs (s, d, pos+1);
            s.pop_back();
        }
    }
};

