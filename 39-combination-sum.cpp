class Solution
{
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        sort (candidates.begin(), candidates.end());
        vector<int> s;
        dfs (candidates, s, 0, 0, target);

        return ret;
    }

private:
    vector<vector<int>> ret;

    void dfs(vector<int>& c, vector<int>& s,int index, int sum, int target)
    {
        for (int i = index; i < c.size(); ++i)
        {
            sum += c[i];

            if (sum > target)
                return;
            else if (sum == target)
            {
                s.push_back(c[i]);
                ret.push_back(s);
                s.pop_back();
                return;
            }
            else
            {
                s.push_back(c[i]);
                dfs (c, s, i, sum, target);
                s.pop_back();
            }

            sum -= c[i];
        }
    }
};

