class Solution
{
public:
    bool search(vector<int>& nums, int target)
    {
        if (nums.size() == 0)
            return false;

        if (target >= nums[0])
        {
            for (auto iter = nums.begin(); iter != nums.end(); ++iter)
            {
                if (*iter == target)
                    return true;

                if (*iter > target)
                    return false;
            }
        }
        else
        {
            for (auto iter = nums.rbegin(); iter != nums.rend(); ++iter)
            {
                if (*iter == target)
                    return true;

                if (*iter < target)
                    return false;
            }
        }

        return false;
    }
};

