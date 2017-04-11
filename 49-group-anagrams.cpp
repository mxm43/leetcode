class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        vector< vector<string> > ret;
        map<string, vector<string> > m;

        for (auto &s : strs)
        {
            string t = s;
            sort(t.begin(), t.end());

            m[t].push_back(s);
        }

        for (auto &i : m)
            ret.push_back(i.second);

        return ret;
    }
};

