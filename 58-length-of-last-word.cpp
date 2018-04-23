class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int count = 0;

        for(auto iter = s.rbegin(); iter != s.rend(); ++iter)
        {
            if (*iter == ' ' && count == 0)
                continue;
            else if (*iter == ' ')
                break;
            else
                ++count;
        }

        return count;
    }
};

