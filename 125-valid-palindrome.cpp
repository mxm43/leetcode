class Solution {
public:
    bool isPalindrome(string s)
    {
        int start = 0, end = s.length() - 1;
        while (start < end)
        {
            if (isalnum(s[start]) == false)
            {
                ++start;
                continue;
            }

            if (isalnum(s[end]) == false)
            {
                --end;
                continue;
            }

            if (tolower(s[start++]) != tolower(s[end--]))
                return false;
        }

        return true;
    }
};

