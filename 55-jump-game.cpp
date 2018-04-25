class Solution
{
public:
    bool canJump(vector<int>& nums)
    {
        int m = 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (i > m)
                break;

            m = max(m, nums[i]+i);
        }

        return m >= nums.size()-1;
    }
};

