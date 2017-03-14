#define MIN(a, b) ((a) < (b) ? (a) : (b))

class Solution {
public:
    string longestPalindrome(string s) {
        int pos = 0, max_right = 0;
        vector<char> str(s.size()*2+1);
        vector<int>  rl (s.size()*2+1);

        if (s.size() == 0)
            return "";

        for (int i = 0; i < s.size(); ++i)
            str[2*i+1] = s[i];

        for (int i = 0; i < str.size(); ++i)
        {
            if (i < max_right)
                rl[i] = MIN (rl[pos*2-i], max_right - i);
            else
                rl[i] = 1;

            while (i-rl[i]>=0&&i+rl[i]<str.size()&&str[i-rl[i]]==str[i+rl[i]])
                ++rl[i];

            if (i+rl[i]-1 > max_right)
            {
                max_right = i+rl[i]-1;
                pos = i;
            }
        }

        int max = max_element (rl.begin(), rl.end()) - rl.begin();
        return s.substr ((max-rl[max]+1)/2, rl[max]-1);
    }
};

