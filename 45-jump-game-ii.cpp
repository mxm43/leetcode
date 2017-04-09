class Solution
{
public:
    int jump(vector<int>& nums)
    {
        int r = 0, f = 0, n = nums.size();

        for (int i = 0; i < n && f < n-1;)
        {
            int t = 0;
            for (; i <= f; ++i)
                t = max(t, i+nums[i]);

            if (f == t)
                return -1;

            f = t;
            ++r;
        }

        return r;
    }
};

