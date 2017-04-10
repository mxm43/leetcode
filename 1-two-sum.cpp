class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> ret_value;
        vector<int>::iterator it;

        vector< pair<int,int> > v;
        for (it = nums.begin(); it != nums.end(); ++it)
            v.push_back(make_pair(*it, it - nums.begin()));
        sort (v.begin(), v.end(),
            [](pair<int,int>& a, pair<int,int>& b){return a.first < b.first;});

        vector< pair<int,int> >::iterator i,j;
        for (i = v.begin(); i != v.end()-1; ++i)
        {
            for (j = i+1; j != v.end() && (*i).first+(*j).first < target; ++j);
            if ((*i).first + (*j).first == target)
                break;
        }

        ret_value.push_back((*i).second);
        ret_value.push_back((*j).second);

        return ret_value;
    }
};

