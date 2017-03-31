class Solution
{
public:
    vector< vector<int> > threeSum(vector<int>& nums)
    {
        vector< vector<int> > ret;
        sort (nums.begin(), nums.end());

        for (int i = 0; i < nums.size();)
        {
            for (int j = i+1, k = nums.size()-1; j < k;)
            {
                int s = nums[i]+nums[j]+nums[k];
                if (s < 0)
                    ++j;
                else if (s > 0)
                    --k;
                else
                {
                    ret.push_back(vector<int>{nums[i], nums[j], nums[k]});
                    while (++j < k && nums[j] == nums[j-1]);
                    --k;
                }
            }
            while (++i < nums.size() && nums[i] == nums[i-1]);
        }

        return ret;
    }
};

