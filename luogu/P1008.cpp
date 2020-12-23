#include <bits/stdc++.h>
using namespace std;
bool num[10];
int main()
{
    for (int i = 123; i <= 987; i++)
    {
        num[i / 100] = 1;
        num[i % 100 / 10] = 1;
        num[i % 10] = 1;
        for (int j = i + 1; j <= 987; j++)
        {
            if (num[j / 100] || num[j % 100 / 10] || num[j % 10])
            {
                continue;
            }
            else
            {
                num[j / 100] = 1;
                num[j % 100 / 10] = 1;
                num[j % 10] = 1;
            }
            for (int k = j + 1; k <= 987; k++)
            {
                if (num[k / 100] || num[k % 100 / 10] || num[k % 10])
                {
                    continue;
                }
                if((j / i) == 2 && (k / i) == 3)
                {
                    printf("%d %d %d\n",i,j,k);
                }
            }
            num[j / 100] = 0;
            num[j % 100 / 10] = 0;
            num[j % 10] = 0;
        }
        num[i / 100] = 0;
        num[i % 100 / 10] = 0;
        num[i % 10] = 0;
    }
    system("pause");
    return 0;
}