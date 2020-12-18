//阿巴阿巴阿巴，怎么还是不行
#include <bits/stdc++.h>
using namespace std;
bool prime(int a)
{
    for (int k = 2; k <= a / 2; k++)
    {
        if (a % k == 0)
        {
            return 0;
        }
    }
    return 1;
}
int qua(int n)
{
    if (!prime(n))
    {
        return 0;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (prime(i))
        {
            if (n % i == 0)
            {
                printf("%d ", &i);
                return qua(n / i);
            }
        }
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    qua(num);
    system("pause");
    return 0;
}