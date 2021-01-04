//ͬ3-2-5
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    scanf("%d",&x);
    if(x%4==0)
    {
        if(x%100!=0)
        {
            printf("YES");
        }
        else
        {
            if(x%400==0)
            {
                printf("YES");
            }
            else
            {
                printf("NO");
            }
        }
    }
    else
    {
        printf("NO");
    }
    system("pause");
    return 0;
}