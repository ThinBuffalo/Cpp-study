#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    scanf("%d%d" ,&a ,&b);
    if(a>b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    printf("%d %d" ,a ,b);
    system("pause");
    return 0;
}