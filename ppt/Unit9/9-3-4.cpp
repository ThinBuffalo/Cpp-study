#include<bits/stdc++.h>
using namespace std;
char score[101];
int main()
{
    int round=0,sum=0,temp=0;
    scanf("%s",score);
    int size=strlen(score);
    /*
    若某一轮的第一次滚球就击倒全部十个柱，则本轮不再滚球
    (若是第十轮则还需另加两次滚球，不妨称其为第十一轮和第十二轮，
    并不是所有的情况都需要滚第十一轮和第十二轮球)。
    该轮得分为本次击倒柱数 10 与以后两次滚球所击倒柱数之和。
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