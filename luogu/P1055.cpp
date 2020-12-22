#include <bits/stdc++.h>
using namespace std;
char isbn[14], c[12] = "0123456789X";
int n = 1, sum;
int main()
{
    scanf("%s", isbn);
    for (int i = 0; i < 12; i++)
    {
        if (isbn[i] == '-')
        {
            continue; 
        }
        sum += (isbn[i] - 48) * n;
        n++;
    }
    sum %= 11;
    if (c[sum] ==isbn[12])
    {
        printf("Right");
    }
    else
    {
        isbn[12] = c[sum];
        printf("%s", isbn);
    }
    system("pause");
    return 0;
}