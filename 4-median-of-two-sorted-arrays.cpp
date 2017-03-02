class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> all;
        vector<int>::iterator it1, it2;

        if (nums1.size() + nums2.size() == 0)
            return 0;

        it1 = nums1.begin();
        it2 = nums2.begin();

        while (it1 != nums1.end() || it2 != nums2.end())
        {
            if (it1 != nums1.end() && it2 != nums2.end())
            {
                if (*it1 > *it2)
                {
                    all.push_back(*it2);
                    ++it2;
                }
                else
                {
                    all.push_back(*it1);
                    ++it1;
                }
            }
            else if (it1 == nums1.end())
            {
                all.push_back(*it2);
                ++it2;
            }
            else
            {
                all.push_back(*it1);
                ++it1;
            }
        }

        int pos = (all.size()-1)/2;
        if (all.size() % 2 == 0)
            return (*(all.begin()+pos) + *(all.begin()+pos+1))/(double)2;
        else
            return *(all.begin()+pos);
    }
};


