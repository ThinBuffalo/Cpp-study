#include <bits/stdc++.h>
using namespace std;
char a[1001], b[1001], ans[1001];
int size;
int main()
{
    memset(ans, 48, sizeof(ans));
    scanf("%s%s", a, b);
    //获取位数
    for (int i = 1000; i >= 0; i--)
    {
        if (a[i] != '\000' || b[i] != '\000')
        {
            size = i;
            break;
        }
    }
    //运算
    for (int i = size; i >= 0; i--)
    {
        if ((a[i] - '0') + (b[i] - '0') > 9)
        {
            ans[i] += (a[i] - '0') + (b[i] - '0') - 10;
            a[i + 1]++;
        }
        else
        {
            ans[i] += (a[i] - '0') + (b[i] - '0');
        }
    }
    for (int i = 0; i <= size; i++)
    {
        printf("%c", ans[i]);
    }
    system("pause");
    return 0;
}