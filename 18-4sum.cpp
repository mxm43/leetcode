class Solution
{
public:
    vector< vector<int> > fourSum(vector<int>& nums, int target)
    {
        vector< vector<int> > ret;
        sort (nums.begin(), nums.end());

        for (int i = 0; i < nums.size();)
        {
            target -= nums[i];
            for (int j = i+1; j < nums.size();)
            {
                target -= nums[j];
                for (int k = j+1, l = nums.size()-1; k < l;)
                {
                    int s = nums[k]+nums[l];
                    if (s < target)
                        ++k;
                    else if (s > target)
                        --l;
                    else
                    {
                        ret.push_back
                            (vector<int>{nums[i],nums[j],nums[k],nums[l]});
                        while (++k < l && nums[k] == nums[k-1]);
                        --l;
                    }
                }
                target += nums[j];
                while (++j < nums.size() && nums[j] == nums[j-1]);
            }
            target += nums[i];
            while (++i < nums.size() && nums[i] == nums[i-1]);
        }

        return ret;
    }
};

