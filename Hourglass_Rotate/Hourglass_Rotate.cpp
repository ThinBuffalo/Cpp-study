#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
const char a[]={'!','@','#','$','%','^','&','*','\000'};
int main()
{
	srand(time(0));
	int length=strlen(a);
	while(1)
	{
		//иообиЁб╘
		for(int i=1;i<=15;i++)
		{
			for(int j=1;j<=15;j++)
			{
				if(i<=7)
				{
					if(j>=i&&j+i<15)
					{
						printf("%c",a[rand()%(length+1)]);
					}
					else
					{
						printf(" ");
					}
				}
				else
				{
					if(j<i&&j+i>=15)
					{
						printf("%c",a[rand()%(length+1)]);
					}
					else
					{
						printf(" ");
					}
				}
			}
			printf("\n");
		} 
		Sleep(1000);
		system("cls");
		//вСсриЁб╘
		for(int i=1;i<=15;i++)
		{
			for(int j=1;j<=15;j++)
			{
				if(i<=7)
				{
					if(j<=i||j+i>=15)
					{
						printf("%c",a[rand()%(length+1)]);
					}
					else
					{
						printf(" ");
					}
				}
				else
				{
					if(j>i||j+i<=15)
					{
						printf("%c",a[rand()%(length+1)]);
					}
					else
					{
						printf(" ");
					}
				}
			}
			printf("\n");
		}
		Sleep(1000);
		system("cls");
	}
	return 0;
}
