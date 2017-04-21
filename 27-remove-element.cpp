class Solution
{
public:
    int removeElement(vector<int>& nums, int val)
    {
        int ret = nums.size();

        for (int i = 0; i < ret; ++i)
            while (i < ret && nums[i] == val)
                nums[i] = nums[--ret];

        return ret;
    }
};
