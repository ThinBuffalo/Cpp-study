//同/gcd/gcd.cpp
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //辗转相除法：
    //当m除以n的余数为0时，n即为m和n的最大公约数；否则，求m和n的最大公约数可以等同为求n和余数的最大公约数。
    int m,n,r;
    cin>>m>>n;
    r=n;
    while(m%n!=0)
    {
        r=m%n;
        m=n;
        n=r;
    }
    printf("%d",r);
    system("pause");
    return 0;
}