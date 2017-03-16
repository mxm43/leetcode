class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        string s = to_string (x);
        string::iterator b,e;
        for (string::iterator b=s.begin(), e=s.end()-1; b < e; ++b, --e)
        {
            if (*b != *e)
                return false;
        }

        return true;
    }
};

