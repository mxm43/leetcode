class Solution
{
public:
    vector<int> findSubstring(string s, vector<string>& words)
    {
        int c = words.size(), l = c>0 ? words[0].size() : 0;
        map<string, int> m;
        vector<int> ret;

        for (auto &s : words)
            ++m[s];

        for (int i = 0; i < s.size()-c+1; ++i)
        {
            bool f = true;
            map<string, int> t;

            for (int j = i; j < i+c*l; j+= l)
            {
                string sub = s.substr(j, l);
                if (!m.count(sub) || ++t[sub] > m[sub])
                {
                    f = false;
                    break;
                }
            }

            if (f)
                ret.push_back(i);
        }

        return ret;
    }
};

