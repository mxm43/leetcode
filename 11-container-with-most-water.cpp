#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int max_height = 0, max_area = 0;
        int rest_count = height.size();

        for (int i = 0; i < height.size(); ++i)
            max_height = MAX(max_height, height[i]);

        for (int i = 0; i < max_height; ++i)
        {
            vector<int>::iterator f = height.begin();
            vector<int>::iterator b = height.end()-1;

            for (;; --b) if (*b >= i) break;
            for (;; ++f) if (*f >= i) break;
            if (b == f) break;
            max_area = MAX(max_area, (b-f) * MIN(*f, *b));
        }

        return max_area;
    }
};

