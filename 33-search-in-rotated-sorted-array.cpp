class Solution
{
public:
    int search(vector<int>& nums, int target)
    {
        if (nums.size() == 0) return -1;

        int l = 0, m = nums.size()-1, h = nums.size()-1;

        while (l < m)
        {
            int t = (l+m) >> 1;
            if (nums[t] > nums[h])
                l = t+1;
            else
                m = t;
        }

        if (nums[h] < target)
            h = l-1, l = 0;

        while (l < h)
        {
            int t = (l+h) >> 1;
            if (nums[t] < target)
                l = t+1;
            else
                h = t;
        }

        return nums[l]==target ? l : -1;
    }
};

