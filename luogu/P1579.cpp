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
    for(int i=2;i<=n/2;i++)
    {
        if(prime(i))
        {
            for(int j=2;j<=n/2;j++)
            {
                if(prime(j))
                {
                    for(int k=2;k<=n/2;k++)
                    {
                        if(prime(k))
                        {
                            if((i+j+k)==n)
                            {
                                printf("%d %d %d\n",i,j,k);
                            }
                        }
                    }
                }
            }
        }
    }
    system("pause");
    return 0;
}