class Solution
{
public:
    int searchInsert(vector<int>& nums, int target)
    {
        int ret = 0, s = 0, e = nums.size()-1;

        while (s <= e)
        {
            ret = (s+e)/2;
            if (nums[ret] < target)
                s = ret+1;
            else if (nums[ret] > target)
                e = ret-1;
            else
                return ret;
        }

        return target>nums[ret] ? ret+1 : ret;
    }
};

