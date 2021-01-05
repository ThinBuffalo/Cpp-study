#include<bits/stdc++.h>
using namespace std;
bool flag[101];
int num[101],n,t;
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            for(int k=1;k<=n;k++)
            {
                if(num[k]==num[i]+num[j]&&flag[k]==0)
                {
                    t++;
                    flag[k]=1;
                }
            }
        }
    }
    printf("%d",t);
    system("pause");
    return 0;
}