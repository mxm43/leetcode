class Solution
{
public:
    vector< vector<int> > permuteUnique(vector<int>& nums)
    {
        sort (nums.begin(), nums.end());
        vector<bool> flag(nums.size(), false);
        vector<int>  v;
        dfs (nums, flag, v, 0);

        return ret;
    }

private:
    vector< vector<int> > ret;

    void dfs (vector<int>& n, vector<bool>& f, vector<int>& v, int count)
    {
        if (count == n.size())
        {
            ret.push_back(v);
            return;
        }

        for (int i = 0; i < n.size(); ++i)
        {
            if (f[i])
                continue;

            v.push_back(n[i]);
            f[i] = true;
            dfs (n, f, v, count+1);
            v.pop_back();
            f[i] = false;

            while (i+1 < n.size() && n[i]==n[i+1]) ++i;
        }
    }
};

