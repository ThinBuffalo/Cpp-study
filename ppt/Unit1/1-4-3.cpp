//ͬ/gcd/gcd.cpp
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //շת�������
    //��m����n������Ϊ0ʱ��n��Ϊm��n�����Լ����������m��n�����Լ�����Ե�ͬΪ��n�����������Լ����
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