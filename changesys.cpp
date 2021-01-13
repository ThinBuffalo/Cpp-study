//½øÖÆ×ª»»
#include <bits/stdc++.h>
using namespace std;
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
    int n, point, size, right = 2147483647;
    double ans = 0.0;
    scanf("%d%s", &n, other);
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
        ans += number(other[i]) * theSecondParty(n, right);
        right--;
    }
    printf("%lf\n", ans);
    system("pause");
    return 0;
}