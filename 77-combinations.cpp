class Solution
{
private:
    vector<int> v;

    void recursion(vector<vector<int> > &r, int s, int e, int k)
    {
        if (k == 0)
        {
            r.push_back(v);
            return;
        }

        for (int i = s; i <= e-k+1; ++i)
        {
            v.push_back(i);
            recursion(r, i+1, e, k-1);
            v.pop_back();
        }
    }

public:
    vector<vector<int> > combine(int n, int k)
    {
        vector<vector<int> > ret;

        recursion(ret, 1, n, k);

        return ret;
    }
};

