class Solution
{
public:
    int firstMissingPositive(vector<int>& nums)
    {
        int l = 0, h = nums.size();

        while (l < h)
        {
            if (nums[l]-1 == l)
                ++l;
            else if (nums[l]-1>0 && nums[l]-1<h && nums[nums[l]-1]!=nums[l])
                swap (nums[nums[l]-1], nums[l]);
            else
                nums[l] = nums[--h];
        }

        return l+1;
    }
};

