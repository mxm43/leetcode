class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        char flag[256] = {0};
        string::iterator b,e;

        b = e = s.begin();
        while (e != s.end())
        {
            while (!flag[*e])
            {
                flag[*e] = 1;
                ++e;
                if (max < e - b)
                    max = e - b;
                if  (e == s.end())
                    return max;
            }

            while (*b != *e)
            {
                flag[*b] = 0;
                ++b;
            }
            flag[*b] = 0;
            ++b;
        }

        return max;
    }
};


