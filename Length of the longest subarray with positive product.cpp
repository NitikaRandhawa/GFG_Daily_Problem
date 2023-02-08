class Solution
{
public:
    int maxLength(vector<int> &a, int n)
    {
        int i = 0;
        int j = 0;
        int cntn = 0;
        int ans = 0;
        while (j < n)
        {
            if (a[j] == 0)
            {
                while (i <= j)
                {
                    if (a[i] < 0)
                        cntn--;
                    i++;
                    if (cntn % 2 == 0)
                        ans = max(ans, j - i);
                }
            }
            if (a[j] < 0)
                cntn++;
            if (cntn % 2 == 0)
                ans = max(ans, j - i + 1);
            j++;
        }
        while (i < j)
        {
            if (a[i] < 0)
                cntn--;
                i++;
            if (cntn % 2 == 0)
                ans = max(ans, j - i);
        }
        return ans;
    }
};
