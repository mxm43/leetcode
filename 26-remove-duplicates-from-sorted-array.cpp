class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        if (nums.empty()) return 0;

        int p = 0;
        for (int i = 0; i < nums.size(); ++i)
            if (nums[i] != nums[p])
                nums[++p] = nums[i];

        return p+1;
    }
};

