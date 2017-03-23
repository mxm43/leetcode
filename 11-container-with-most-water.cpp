#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int max_area = 0;
        int i = 0, j = height.size()-1;

        while (i < j)
        {
            max_area = MAX(max_area, (j-i)*MIN(height[i], height[j]));
            if (height[i] < height[j])
                ++i;
            else
                --j;
        }

        return max_area;
    }
};

