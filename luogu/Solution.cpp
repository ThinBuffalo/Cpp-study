#include <bits/stdc++.h>
using namespace std;
int f(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    int i,j;
    scanf("%d",&n);
    if(f(n-4))
    {
        printf("2 2 %d\n",n-4);
        return 0;
    }
    for(i=3;i<=n;i+=2)
    {
        if(i%2!=0&&f(i))
        {
            for(j=i;j<=n;j+=2)
            {
                if(j%2!=0&&f(j))
                {
                    if(f(n-i-j))
                    {
                        printf("%d %d %d\n",i,j,n-i-j);
                        system("pause");
                        return 0;
                    }
                }
            }
        }
    }
}
