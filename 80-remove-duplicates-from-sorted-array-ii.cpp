class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        int p = 0, c = 0;

        if (nums.size() <= 1)
            return nums.size();

        for (auto iter = nums.begin()+1; iter != nums.end(); ++iter)
        {
            if (*iter != nums[p])
            {
                nums[++p] = *iter;
                c = 0;
            }
            else if (c++ < 1)
                nums[++p] = *iter;
        }

        return p+1;
    }
};

