#include<bits/stdc++.h>
using namespace std;
int gcd(int m,int n)
{
    if(n==0)
    {
        return m;
    }
    else
    {
        return gcd(n,m%n);
    }
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d\n",gcd(m,n));
    system("pause");
    return 0;
}