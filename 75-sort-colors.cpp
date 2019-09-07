class Solution
{
public:
    void sortColors(vector<int>& nums)
    {
        int start = 0, end = nums.size() - 1;
        for (int i = start; i <= end; ++i)
        {
            if (nums[i] == 0)
            {
                nums[start++] = 0;
            }
            else if (nums[i] == 2)
            {
                nums[i--] = nums[end];
                nums[end--] = 2;
            }
            else
            {
                continue;
            }
        }

        for (int i = start; i <= end; ++i)
            nums[i] = 1;
    }
};

