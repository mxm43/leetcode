class Solution
{
public:
    void nextPermutation(vector<int>& nums)
    {
        for (int i = nums.size()-2; i >= 0; --i)
        {
            if (nums[i] < nums[i+1])
            {
                int j = nums.size();

                while (nums[i] >= nums[--j]);
                swap (nums[i], nums[j]);
                reverse (nums.begin()+i+1, nums.end());

                return;
            }
        }

        reverse (nums.begin(), nums.end());

        return;
    }
};

