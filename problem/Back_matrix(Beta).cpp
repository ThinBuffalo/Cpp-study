#include<stdio.h>
int arr[6][6],n=5,x=1,y=1,num=1;
//1,1 2,1 3,1 4,1 5,1 x
//
//1,2 2,2 3,2 4,2 5,2
//
//1,3 2,3 3,3 4,3 5,3
//
//1,4 2,4 3,4 4,4 5,4
//
//1,5 2,5 3,5 4,5 5,5
//	y
int main()
{
	for(int i=0;x==n/2+1&&y==n/2+1;i++)
	{
		for(x=i+1;x<=n-i;x++)
		{
			arr[x][y]=num++;
		}
		for(y=1+i;y<=n-i;y++)
		{
			arr[x][y]=num++;
		}
		for(x=n-i;x>=1+i;x--)
		{
			arr[x][y]=num++;
		}
		for(y=n-i;y>=1+i;y--)
		{
			arr[x][y]=num++;
		}
	}
	for(int y=1;y<=n;y++)
	{
		for(int x=1;x<=5;x++)
		{
			printf("%d",arr[x][y]);
		}
		printf("\n");
	}
	return 0;
}
