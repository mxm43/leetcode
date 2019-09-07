class Solution {
public:
    vector<vector<int>> insert(
        vector<vector<int>> &intervals, vector<int> &newInterval)
    {
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end(),
                [](vector<int> &v1, vector<int> &v2){ return v1[0] < v2[0]; });

        vector<vector<int>> result;
        result.push_back(intervals[0]);
        for (auto iter = intervals.begin()+1; iter != intervals.end(); ++iter)
        {
            if ((*iter)[0] <= (*result.rbegin())[1])
            {
                if ((*iter)[1] > (*result.rbegin())[1])
                    (*result.rbegin())[1] = (*iter)[1];
            }
            else
            {
                result.push_back(*iter);
            }
        }

        return result;
    }
};

