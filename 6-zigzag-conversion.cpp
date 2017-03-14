class Solution {
public:
    string convert(string s, int numRows) {
        string ret;
        int step = 2*(numRows-1);
        step = step ? step : 1;
        for (int r = 0; r < numRows; ++r)
        {
            int i = r;
            while (i < s.size ())
            {
                ret += s[i];
                if (i + step - r*2 < s.size() && step != r*2 && r != 0)
                    ret += s[i+step-r*2];
                i += step;
            }
        }
        return ret;
    }
};


