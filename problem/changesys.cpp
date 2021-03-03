#include <bits/stdc++.h>
using namespace std;
//转char为int
int number(char num)
{
    if (num < '9')
    {
        return num - '0';
    }
    else
    {
        return num - 'A' + 10;
    }
}
//求n的k次方
float theSecondParty(int n, int k)
{
    if (k == 0)
        return 1;
    float ans = 1.0;
    bool negative = 0;
    if (k < 0)
    {
        k = 0 - k;
        negative = 1;
    }
    for (int i = 1; i <= k; i++)
    {
        ans *= (float)n;
    }
    if (negative)
    {
        ans = 1.0 / ans;
    }
    return ans;
}
int main()
{
    char other[32];
    int n1, n2, point, size, right = 2147483647; //int的最大值，为免48行使权为0与53行冲突(0.···)
    double ans = 0.0;
    scanf("%d%s%d", &n1, other, &n2); //第一个输代转换数字进制，第二个输代转换数字（数字中如有字母用大写），第三个输转换到的进制
    //n进制转换10进制
    for (int i = 0; 1; i++)
    {
        if (other[i] == '.')
        {
            right = i - 1;
        }
        if (other[i] == '\000')
        {
            size = i - 1;
            if (right == 2147483647)
            {
                right = i - 1;
            }
            break;
        }
    }
    for (int i = 0; i <= size; i++)
    {
        if (other[i] == '.')
            continue;
        ans += number(other[i]) * theSecondParty(n1, right);
        right--;
    }
    //10进制转n进制，暂只支持整数
    int to[100] = {0.0};
    int i;
    int a = ans;
    for (i = 1; a != 0; i++)
    {
        to[i] = a % n2;
        a /= n2;
    }
    for (i = i - 1; i >= 1; i--)
    {
        if (n2 > 10.0)
        {
            printf("%c", (char)to[i] + 55);
        }
        else
        {
            printf("%d", to[i]);
        }
    }
    printf("\n");
    // printf("%lf\n", ans);
    system("pause");
    return 0;
}