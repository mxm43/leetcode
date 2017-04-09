class Solution
{
public:
    int trap(vector<int>& height)
    {
        int sum = 0, hl = 0, hr = 0, l = 0, r = height.size();

        while (l < r)
        {
            if (hl < hr)
            {
                sum += max(hl-height[l], 0);
                hl  =  max(hl, height[l++]);
            }
            else
            {
                sum += max(hr-height[--r], 0);
                hr  =  max(hr, height[r]);
            }
        }

        return sum;
    }
};

