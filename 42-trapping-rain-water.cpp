class Solution
{
public:
    int trap(vector<int>& height)
    {
        int s = 0, e = height.size()-1;
        int sum = 0, cur = 0;

        while (s < e)
        {
            while (height[s] <= cur) ++s;
            while (height[e] <= cur) --e;

            if (s >= e)
                break;

            ++cur;
            int count = 0;
            for (int i = s; i <= e; ++i)
                if (height[i] >= cur)
                    ++count;

            sum += e-s+1;
            sum -= count;
        }

        return sum;
    }
};

