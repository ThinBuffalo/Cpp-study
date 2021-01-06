#include<bits/stdc++.h>
using namespace std;
bool a[5001][5001],h[5001];
int n,m,b,g,t;
int main()
{
    scanf("%d%d%d%d",&n,&m,&b,&g);
    for(int i=1;i<=b;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        for(int j=x;j<=y;j++)
        {
            // for(int k=1;k<=m;k++)
            // {
            //     a[k][j]=1;
            // }
            h[j]=1;
        }
    }
    for(int i=1;i<=g;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        for(int j=1;j<=n;j++)
        {
            if(!h[j])
            {
                for(int k=x;k<=y;k++)
                {
                    a[j][k]=1;
                } 
            }
            
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(!h[i])
        {
            for(int j=1;j<=m;j++)
            {
                if(!a[i][j])
                {
                    t++;
                }
            }
        }
    }
    printf("%d",n*m-t);
    system("pause");
    return 0;
}