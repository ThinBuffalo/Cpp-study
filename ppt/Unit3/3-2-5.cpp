#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    scanf("%d", &x);
    if ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0))
    {
        printf("%d是闰年", x);
    }
    else
    {
        printf("%d不是闰年", x);
    }
    system("pause");
    return 0;
}