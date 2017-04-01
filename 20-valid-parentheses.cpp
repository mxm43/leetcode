class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> c;

        for (int i = 0; i < s.size(); ++i)
        {
            if (i > 0 && !c.empty() && match(c.top(), s[i]))
                c.pop();
            else
                c.push(s[i]);
        }

        return c.empty();
    }

private:
    bool match(char r, char l)
    {
        switch (l)
        {
            case ')': return r == '(';
            case ']': return r == '[';
            case '}': return r == '{';
        }

        return false;
    }
};

