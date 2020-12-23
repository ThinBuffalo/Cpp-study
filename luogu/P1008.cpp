#include <bits/stdc++.h>
using namespace std;
bool num[10];
int main()
{
    for (int i = 123; i <= 321; i++)
    {
        int iw[4];
        if ((iw[1] != iw[2]) || (iw[1] != iw[3]) || (iw[2] != iw[3]))
        {
            num[iw[1]] = 1;
            num[iw[2]] = 1;
            num[iw[3]] = 1;
            int j = i * 2;
            int jw[4];
            if (!(num[jw[1]] || num[jw[2]] || num[jw[3]]) && ((jw[1] != jw[2]) || (jw[1] != jw[3]) || (jw[2] != jw[3])))
            {
                num[jw[1]] = 1;
                num[jw[2]] = 1;
                num[jw[3]] = 1;
                int k = i * 3;
                int kw[4];
                if (!(num[kw[1]] || num[kw[2]] || num[kw[3]]) && ((kw[1] != kw[2]) || (kw[1] != kw[3]) || (kw[2] != kw[3])))
                {
                    printf("%d %d %d\n", i, j, k);
                }
                num[jw[1]] = 0;
                num[jw[2]] = 0;
                num[jw[3]] = 0;
            }
            num[iw[1]] = 0;
            num[iw[2]] = 0;
            num[iw[3]] = 0;
        }
    }
    system("pause");
    return 0;
}