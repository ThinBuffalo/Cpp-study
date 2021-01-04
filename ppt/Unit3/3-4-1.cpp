//ͬ3-3-2
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    if(x<=y)
    {
        if(y<=z)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }
    system("pause");
    return 0;
}