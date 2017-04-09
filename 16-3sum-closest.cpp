class Solution
{
public:
    int threeSumClosest(vector<int>& nums, int target)
    {
        int min = INT_MAX, ret = 0;;
        sort (nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); ++i)
        {
            for (int j = i+1, k = nums.size()-1; j < k;)
            {
                int sum = nums[i] + nums[j] + nums[k];

                if (min > abs(sum-target))
                {
                    min = abs(sum-target);
                    ret = sum;
                }

                if (sum-target > 0)
                    --k;
                else if (sum-target < 0)
                    ++j;
                else
                    return sum;
            }
        }

        return ret;
    }
};

