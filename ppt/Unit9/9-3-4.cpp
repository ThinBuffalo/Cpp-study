#include<bits/stdc++.h>
using namespace std;
char score[101];
int main()
{
    int round=0,sum=0,temp=0;
    scanf("%s",score);
    int size=strlen(score);
    /*
    ��ĳһ�ֵĵ�һ�ι���ͻ���ȫ��ʮ���������ֲ��ٹ���
    (���ǵ�ʮ������������ι��򣬲�������Ϊ��ʮһ�ֺ͵�ʮ���֣�
    ���������е��������Ҫ����ʮһ�ֺ͵�ʮ������)��
    ���ֵ÷�Ϊ���λ������� 10 ���Ժ����ι�������������֮�͡�
    */
    for(int i=0;i<=size;i++)
    {
        if(score[i]=='/')
        {
            temp++;
            sum+=10;
        }
        
    }
}