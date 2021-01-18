#include<bits/stdc++.h>
using namespace std;
char str[101];
int main()
{
    scanf("%s",str);
    int maxpower=0,size=strlen(str)+1;
    int temp=-1,power=1;
    for(int i=0;i<size;i++)
    {
        if(!(str[i]!='A')&&(str[i]!='E')&&(str[i]!='I')&&(str[i]!='O')&&(str[i]!='Y')&&(str[i]!='U'))
        { 
            power=i-temp;
            if(power>maxpower)
            {
                maxpower=power;
            }
            power=0;
            temp=i;
        }
    }
    printf("%d",maxpower);
    system("pause");
    return 0;
}