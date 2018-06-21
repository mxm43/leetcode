class Solution
{
private:
    void recursive(vector<string> &v, string &s, int index, int num, string &t)
    {
        if (s.length()-index < num * 1 || s.length()-index > num * 3)
            return;

        for (int i = 0; i < 3 && i < s.length()-index; ++i)
        {
            if (i != 0 && s[index] == '0')
                continue;

            string n = string(s, index, i+1);
            if (atoi(n.c_str()) > 255)
                continue;

            string ip = t + (num != 4 ? "." : "") + n;
            if (num == 1 && s.length() == index+i+1)
            {
                v.push_back(ip);
                continue;
            }
            recursive(v, s, index+i+1, num-1, ip);
        }
    }

public:
    vector<string> restoreIpAddresses(string s)
    {
        vector<string> ret;
        string t("");

        recursive(ret, s, 0, 4, t);

        return ret;
    }
};

