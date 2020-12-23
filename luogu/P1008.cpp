#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
bool num[10];
bool repeat(int n)
{
    int a=n/100;
    int b=n%100/10;
    int c=n%10;
    if(num[a]||num[b]||num[c]||a==b||a==c||a==b||a==0||b==0||c==0)
    {
        return 0;
    }
    else
    {
        num[a]=num[b]=num[c]=1;
        return 1;
    }
}
int main()
{
    for(int i=123;i<=333;i++)
    {
        if(repeat(i))
        {
            int j=i*2;
            if(repeat(j))
            {
                int k=i*3;
                if(repeat(k))
                {
                    printf("%d %d %d\n", i, j, k);
                }
            }
            num[j/100]=num[j%100/10]=num[j%10]=0;
        }
        num[i/100]=num[i%100/10]=num[i%10]=0;
    }
    system("pause");
    return 0;
}