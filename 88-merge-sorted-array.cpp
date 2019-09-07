class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int i1 = m - 1;
        int i2 = n - 1;

        for (int i = m + n - 1; i >= 0; --i)
        {
            if (i1 < 0)
            {
                nums1[i] = nums2[i2--];
            }
            else if (i2 < 0)
            {
                nums1[i] = nums1[i1--];
            }
            else
            {
                nums1[i] = nums1[i1] > nums2[i2] ? nums1[i1--] : nums2[i2--];
            }
        }
    }
};

