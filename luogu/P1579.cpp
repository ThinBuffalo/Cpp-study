#include<bits/stdc++.h>
using namespace std;
bool prime(int a)
{
    for (int num = 2; num <= a / 2; num++)
    {
        if (a % num == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(prime(n-4))
    {
        printf("2 2 %d",n-4);
        // system("pause");
        return 0;
    }
    else
    {
        for(int j=2;j<=n;j++)
        {
            if(prime(j))
            {
                for(int k=j;k<=n;k++)
                {
                    if(prime(k))
                    {
                        if((3+j+k)==n)
                        {
                            printf("3 %d %d",j,k);
                            // system("pause");
                            return 0;
                        }
                    }
                }
            }
        }
    }
}