#include<bits/stdc++.h>
using namespace std;
float theSecondParty(int n,int k)
{
    if(k==0) return 1;
    float ans=1;
    bool negative=0;
    if(n<0)
    {
        n=0-n;
        negative=1;
    }
    for(int i=1;i<=k;i++)
    {
        ans*=n;
    }
    if(negative==1)
    {
        ans=1/ans;
    }
    return ans;
}
int main()
{
    char other[32];
    int n,point,size,right;
    float ans=0;
    scanf("%d%s",&n,other);
    for(int i=0;1;i++)
    {
        if(other[i]=='.')
        {
            right=i;
        }
        if(other[i]=='\n')
        {
            size=i+1;
            break;
        }
    }
    for(int i=0;i<=size;i++)
    {
        if(other[i]='.') continue;
        ans+=other[i]*theSecondParty(n,right);
        right--;
    }
    printf("%lf",ans);
    system("pause");
    return 0;
}