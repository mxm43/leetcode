class Solution
{
public:
    int maxSubArray(vector<int>& nums)
    {
        int size = nums.size();
        int ret = nums[size-1], sum = 0;

        for (int i = size-1; i >= 0; --i)
        {
            sum = max(nums[i], nums[i] + sum);
            if (sum > ret)
                ret = sum;
        }

        return ret;
    }
};

