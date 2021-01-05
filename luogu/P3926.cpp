#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c,p,q,r,x;
    scanf("%d%d%d%d%d%d",&a,&c,&p,&q,&r,&x);
    if(x>=p && x>=q)
    {
        while(a<c && x-p>=0)
        {
            a++;
            x-=p;
        }
        if(x-r>=0)
        {
            x-=q;
        }
        while(x-r>=0)
        {
            a++;
            x-=r;
        }
    }
    printf("%d",a);
    system("pause");
    return 0;
}