#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
const char a[]= {'!','@','#','$','%','^','&','*'};
int main()
{
	srand(time(0));
	//得到语柄
	HANDLE handle;
	handle=GetStdHandle(STD_OUTPUT_HANDLE);
	int length=strlen(a);
	while(1)
	{
		//上下沙漏
		for(int i=1; i<=15; i++)
		{
			char nowa=a[rand()%length];
			SetConsoleTextAttribute(handle,rand()%15+1);//设置控制台颜色
			for(int j=1; j<=15; j++)
			{
				if(i<=7)
				{
					if(j>=i&&j+i<15)
					{
						printf("%c",nowa);
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
						printf("%c",nowa);
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
		//左右沙漏
		for(int i=1; i<=15; i++)
		{
			char nowa=a[rand()%(length+1)];
			SetConsoleTextAttribute(handle,rand()%15+1);
			for(int j=1; j<=15; j++)
			{
				if(i<=7)
				{
					if(j<=i||j+i>15)
					{
						printf("%c",nowa);
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
						printf("%c",nowa);
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
