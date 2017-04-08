class Solution
{
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int l = 0, h = nums.size()-1;
        vector<int> ret;

        while (l < h)
        {
            int t = (l+h) >> 1;
            if (nums[t] < target)
                l = t+1;
            else
                h = t;
        }

        if (l == nums.size() || nums[l] != target)
        {
            ret.push_back(-1);
            ret.push_back(-1);
            return ret;
        }
        else
            ret.push_back(l);

        h = nums.size();
        while (l < h)
        {
            int t = (l+h) >> 1;
            if (nums[t] <= target)
                l = t+1;
            else
                h = t;
        }
        ret.push_back(l-1);

        return ret;
    }
};

