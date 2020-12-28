#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,max;
    scanf("%d",&a);
    max=a;
    scanf("%d",&b);
    max=max<b?b:max;
    scanf("%d",&c);
    max=max<c?c:max;
    printf("%d",max);
    system("pause");
    return 0;
}