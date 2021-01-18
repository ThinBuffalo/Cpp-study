#include <bits/stdc++.h>
using namespace std;
char a[1001], b[1001], ans[1001], bigger;
int asize, bsize;
int main()
{
    scanf("%s%s", a, b);
    for (int i = 1000; i >= 0; i++)
    {
        bool af = 0, bf = 0;
        if (a[i] != '\000' && af == 0)
        {
            asize = i;
            af = 1;
        }
        if (b[i] != '\000' && bf == 0)
        {
            asize = i;
            bf = 1;
            if (af == 0)
            {
                bigger = 'a';
            }
            else
            {
                bigger = 'b';
            }
        }
    }
    for (int i = bigger == 'a' ? asize : bsize; i >= 0;i--)
    {
        
    }
}