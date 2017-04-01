class Solution
{
public:
    bool isValidSudoku(vector<vector<char>>& board)
    {
        for (int i = 0; i < 9; ++i)
        {
            int flag = 0;
            for (int j = 0; j < 9; ++j)
            {
                int c = board[i][j];
                if (c == '.')
                    continue;

                c -= '0';
                if (!(flag & 1<<c))
                    flag |= 1<<c;
                else
                    return false;
            }
            flag = 0;
        }

        for (int i = 0; i < 9; ++i)
        {
            int flag = 0;
            for (int j = 0; j < 9; ++j)
            {
                int c = board[j][i];
                if (c == '.')
                    continue;

                c -= '0';
                if (!(flag & 1<<c))
                    flag |= 1<<c;
                else
                    return false;
            }
            flag = 0;
        }

        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                int flag = 0;
                for (int k = i*3; k < (i+1)*3; ++k)
                {
                    for (int l = j*3; l < (j+1)*3; ++l)
                    {
                        int c = board[k][l];
                        if (c == '.')
                            continue;

                        c -= '0';
                        if (!(flag & 1<<c))
                            flag |= 1<<c;
                        else
                            return false;
                    }
                }
                flag = 0;
            }
        }

        return true;
    }
};

