#include <bits/stdc++.h>
using namespace std;
//תcharΪint
int number(char num)
{
    if (num < '9')
    {
        return num - '0';
    }
    else
    {
        return num - 'A' + 10;
    }
}
//��n��k�η�
float theSecondParty(int n, int k)
{
    if (k == 0)
        return 1;
    float ans = 1.0;
    bool negative = 0;
    if (k < 0)
    {
        k = 0 - k;
        negative = 1;
    }
    for (int i = 1; i <= k; i++)
    {
        ans *= (float)n;
    }
    if (negative)
    {
        ans = 1.0 / ans;
    }
    return ans;
}
int main()
{
    char other[32];
    int n1, n2, point, size, right; //int�����ֵ��Ϊ��48��ʹȨΪ0��53�г�ͻ(0.������)
    double ans = 0.0;
    scanf("%d%s%d", &n1, other, &n2); //��һ�����ת�����ֽ��ƣ��ڶ������ת�����֣�������������ĸ�ô�д������������ת�����Ľ���
    //n����ת��10����
    size=right=strlen(other);
    for(int i=0;i<size;i++)
    {
        if(other[i] == '.')
        {
            right=i-1;
            break;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (other[i] == '.')
            continue;
        ans += number(other[i]) * theSecondParty(n1, right-1);
        right--;
    }
    //10����תn���ƣ���ֻ֧������
    int to[100] = {0.0};
    int i;
    int a = ans;
    for (i = 1; a != 0; i++)
    {
        to[i] = a % n2;
        a /= n2;
    }
    for (i = i - 1; i >= 1; i--)
    {
        if (n2 > 10.0)
        {
            printf("%c", (char)to[i] + 55);
        }
        else
        {
            printf("%d", to[i]);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}