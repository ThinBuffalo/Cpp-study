//��������������
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("%d��������",n);
            system("pause");
            return 0;
        }
    }
    printf("%d������",n);
    system("pause");
    return 0;
}