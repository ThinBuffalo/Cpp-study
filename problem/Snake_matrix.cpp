#include<stdio.h>
int main()
{
	int n=5,start=1,m=2,k=1,line=1;
	scanf("%d",&n);
	while(line!=n+1)
	{
		int j=start;
		int s=m++;
		printf("%d ",j);
		for(int i=line+1;i<=n;i++)
		{
			j+=s++;
			printf("%d ",j);
		}
		printf("\n");
		start+=k++;
		line++;
	}
	return 0;
}
