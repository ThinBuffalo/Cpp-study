#include <bits/stdc++.h>
using namespace std;
char isbn[14], c[13] = "0123456789X";
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
        n++;
        sum += (isbn[i] - 48) * n;
    }
    sum %= 11;
    if (sum == (isbn[13] - 48))
    {
        printf("Right");
    }
    else
    {
        isbn[13] = c[sum];
        printf("%s", isbn);
    }
    system("pause");
    return 0;
}