class Solution
{
public:
    int removeElement(vector<int>& nums, int val)
    {
        int ret = nums.size();

        for (int i = 0; i < ret; ++i)
            while (nums[i] == val && i < ret)
                nums[i] = nums[--ret];

        return ret;
    }
};
