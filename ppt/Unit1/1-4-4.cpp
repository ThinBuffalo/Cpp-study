//��������������
#include<bits/stdc++.h>
using namespace std;
//�����жϺ���
bool prime(int a)
{
    for (int k = 2; k <= a / 2; k++)
    {
        if (a % k == 0)
        {
            return 0;
        }
    }
    return 1;
}
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